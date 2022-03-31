#include "stdafx.h"
#include "MainGame.h"

// 전역 변수: global
//H 접두어         리소스 핸들 (자원 관리자)
//HFONT,HBITMAP....
//HWND 접두어      Windows 핸들(창 관리자)
HINSTANCE           g_hInst;    //프로그램 자체의 관리자                               // 기본 창 클래스 이름입니다.
HWND                g_hwnd;     //창 관리자                               // 기본 창 클래스 이름입니다.

// I interface , D3D11 , Device
//dx에서 쓰는 자원 관리자
ID3D11Device*				g_Device;
//렌더링 파이프라인 바인딩
ID3D11DeviceContext*		g_DeviceContext;
//더블버퍼링
IDXGISwapChain*				g_SwapChain;
//DC같은개념
ID3D11RenderTargetView*		g_RTV;

//스크린좌표(창해상도)
POINT                       g_ScreenMouse;
//월드좌표
Vector2                     g_WorldMouse;
Color                       g_BackGround;

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
//**윈도우 프로시저** (프록스)
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
//창사이즈 재조정   바탕화면 좌표
void SetWindowSize(int x, int y, int width, int height);


int APIENTRY wWinMain( HINSTANCE hInstance,
                      HINSTANCE hPrevInstance,
                      LPWSTR    lpCmdLine,
                      int       nCmdShow)
{
    //new로는 생성이 불가 자체 Create함수를통해 생성가능
    //g_Device = new ID3D11Device();
    //delete 불가
    //자체 release호출

    //윈도우 클래스
    WNDCLASS                    wc;
    MainGame*                   Mg;
    //NULL값으로 시작주소부터 크기까지 초기화
    ZeroMemory(&wc, sizeof(WNDCLASS));

    //참조하지 않은 인자에 대해 경고를 표시하지 않는다
    UNREFERENCED_PARAMETER(lpCmdLine);
    //| & ^ 비트연산자
    wc.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
    //프로시져 넘기기 
    wc.lpfnWndProc = static_cast<WNDPROC>(WndProc);
    
    wc.hInstance = hInstance;
    //아이콘(프로그램 왼쪽위)
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    //윈도우창 활성화시에 마우스커서 모양
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    //윈도우창 바탕색
    wc.hbrBackground = static_cast<HBRUSH>(GetStockObject(GRAY_BRUSH));
    wc.lpszClassName = L"DX11";
    wc.lpszMenuName = nullptr;

    //	운영체제의 레지스터에 이 프로그램을 등록한다
    if (!RegisterClass(&wc))
        return FALSE; //등록이 안됬다면 프로그램 종료

     //생성된 인스턴스값 저장
    g_hInst = hInstance;

    //	메인 윈도우 생성
    g_hwnd = CreateWindowW(
        L"DX11",
        L"DX11",
        WS_OVERLAPPEDWINDOW,
        WINSTARTX,			//창의 시작 x좌표
        WINSTARTY,			//창의 시작 y좌표
        WINSIZEX,			//창 해상도
        WINSIZEY,         //창 해상도
        nullptr,
        nullptr,
        hInstance,	//등록될 인스턴스
        nullptr
    );
    //핸들이 제대로 값을 가지지 못했다면 프로그램 종료
    if (!g_hwnd)
        return FALSE;

    //화면 작업 사이즈 영역 계산
    SetWindowSize(WINSTARTX, WINSTARTY, WINSIZEX, WINSIZEY);

    //	생성한 프로그램을 디스플레이의 최상위로 올린다
    ShowWindow(g_hwnd, nCmdShow);


    //Create Device and DeviceContext, SwapChain
    {
        DXGI_MODE_DESC bufferDesc;
        //desc 나오면 구조체로 보면된다. 디스플레이 모드를 설명합니다.
        ZeroMemory(&bufferDesc, sizeof(DXGI_MODE_DESC));

        bufferDesc.Width = WINSIZEX;// 원하는 back buffer 너비
        bufferDesc.Height = WINSIZEY;// 원하는 back buffer 높이
        bufferDesc.RefreshRate.Numerator = FIXFRAME; //새로 고침 빈도를 헤르츠 단위로 설명 하는 DXGI_RATIONAL 구조 분자
        bufferDesc.RefreshRate.Denominator = 1; // 분모
        bufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;// back buffer 픽셀 형식
        bufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;// 디스플레이 스캔라인 모드
        bufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;//디스플레이 비례모드


        DXGI_SWAP_CHAIN_DESC desc;
        //IDXGISwapChain 객체의 기술(Description) 을 위한 구조체.

        ZeroMemory(&desc, sizeof(DXGI_SWAP_CHAIN_DESC));

        
        desc.Flags = DXGI_SWAP_CHAIN_FLAG_GDI_COMPATIBLE;
        desc.BufferDesc = bufferDesc;// 생성하고자 하는 back buffer의 속성들을 서술하는 구조체
        desc.SampleDesc.Count = 1;//
        desc.SampleDesc.Quality = 0;
        desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;// 버퍼의 용도를 서술하는 구조체
        desc.BufferCount = 1; // Swap chain에서 사용할 back buffer의 개수.(이중버퍼링 : 1개, 삼중버퍼링 : 2개)
        desc.OutputWindow = g_hwnd;// 렌더링 결과를 표시할 윈도우 창의 핸들
        desc.Windowed = TRUE;// 창 모드를 원하면 true, 전체화면 모드를 원하면 false
        desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;// 추가적인 플래그

        UINT creationFlags = D3D11_CREATE_DEVICE_DEBUG | D3D11_CREATE_DEVICE_BGRA_SUPPORT;

        HRESULT hr = D3D11CreateDeviceAndSwapChain
        (
            NULL,//표시할 '디스플레이 디바이스(비디오 카드)'의 'IDXGIAdapter 인터페이스'를 설정합니다.
                 //이것은 DXGI의 인터페이스입니다. NULL을 지정하면 최초에 발견한 디바이스를 사용합니다. 
                 //비디오카드를 지정할 필요가 있을때를 제외하고는 기본적으로 NULL로 설정하면 됩니다
            D3D_DRIVER_TYPE_HARDWARE,//드라이버 타입 D3D_DRIVER_TYPE_S0FTWARK,D3D_DRIVER_TYPE_REFERENCE 등이 있음
            NULL, //소프트웨어 구동기 지정 하드웨어타입으로 지정했을경우 NULL
            creationFlags, //추가적인 장치 생성 플래그들을 지정한다NULL 은 없음 D3D11_CREATE_DEVICE_DEBUG 등이 있음
            NULL, //기능수준 레벨 정하는 매개변수,NULL 최고레벨  D3D_FEATURE_LEVEL_11_0 등이 사용됨
            0, //기능수준 레벨의 D3D_FEATURE_LEVEL 원소 개수이다.널 값을 지정했다면 이 매개변수는 0으로 지정하면 된다
            D3D11_SDK_VERSION, //항상 D3D11_SDK_VERSI0N을 지정한다
            &desc,//스왑체인의 설정값들을 저장한 구조체의 포인터를 넘겨준다
            &g_SwapChain, //생성된 스왑체인 인터페이스의 포인터를 담을 변수
            &g_Device,	//생성된 디바이스 인터페이스의 포인터를 담을 변수를 설정합니다.
            NULL, //생성에 성공한 경우에는 pFeatureLevels에서 지정했던 배열의 처음값을 돌려줍니다.실패한 경우에는 0이 반환됩니다.
            &g_DeviceContext	//생성된 디바이스 컨텍스트 인터페이스의 포인터를 담을 변수를 설정합니다.
        );
        assert(SUCCEEDED(hr) && "디바이스스왑체인 생성 불가");

    }
    //Create BackBuffer
    {
        HRESULT hr;

        ID3D11Texture2D* BackBuffer;
        hr = g_SwapChain->GetBuffer(0, //접근할 버퍼의 번호(인덱스)
            __uuidof(ID3D11Texture2D), //백버퍼를 받을 인터페이스의 타입
            (void**)&BackBuffer);//반환된 인터페이스를 받을 변수의 포인터
        assert(SUCCEEDED(hr));

        hr = g_Device->CreateRenderTargetView(BackBuffer,//렌더타겟 뷰에서 엑세스하는 리소스
            NULL, //렌더타겟 뷰를 정의하는 'D3D11_RENDER_TARGET_VIEW_DESC'구조체의 포인터.
                  //NULL을 넘겨주면, 리소스가 만들어졌을때의 포맷을 그대로 사용하며, 모든 리소스의 밉맵 레벨 0에 액세스하는 뷰를 생성한다.
            &g_RTV);//ID3D11RenderTargetView 인터페이스를 받는 변수의 포인터. NULL을 넘겨주게 되면, 다른 인자들의 유효성을 체크할 수 있다.

        assert(SUCCEEDED(hr));
        //렌더타겟 뷰가 생성된 이후에는 직접 백버퍼의 포인터에 접근하지 않고, 이 렌더타겟 뷰를 사용합니다. 
        //그렇기 때문에 렌더타겟 뷰의 인터페이스를 얻고 난 이후에는 백버퍼의 포인터를 해제합니다.

        BackBuffer->Release();

        //출력병합에 해당 렌더타겟뷰 수만큼 지정
        g_DeviceContext->OMSetRenderTargets(1,//렌더타겟이 몇개인지
            &g_RTV, //렌더할 대상배열들의 포인터
            NULL);//스텐실 깊이 지정 NULL이면 깊이값 꺼두기
    }
    //Disable DepthStencil
    {
        //해당 뎁스스텐실 기능관련부분은 꺼두는 옵션으로 설정
        D3D11_DEPTH_STENCIL_DESC desc = { 0 };
        desc.DepthEnable = false;
        desc.StencilEnable = false;

        ID3D11DepthStencilState* depthStencilState;
        g_Device->CreateDepthStencilState(&desc, &depthStencilState);

        g_DeviceContext->OMSetDepthStencilState(depthStencilState, 0xFF);
        depthStencilState->Release();
    }
    //레스터라이저 옵션
    {
        ID3D11RasterizerState* rasterizerState;
        D3D11_RASTERIZER_DESC desc;
        ZeroMemory(&desc, sizeof(D3D11_RASTERIZER_DESC));
        desc.FillMode = D3D11_FILL_SOLID; // D3D11_FILL_WIREFRAME은 테두리만나옴
        desc.CullMode = D3D11_CULL_NONE; //컬링할때 앞면,뒷면 추려내기 할건지
        desc.DepthBias = 0;
        desc.FrontCounterClockwise = false; //cw ccw 값 정하기
        desc.DepthBiasClamp = 0;
        desc.SlopeScaledDepthBias = 0;
        desc.DepthClipEnable = false; //깊이클리핑 끄기
        desc.ScissorEnable = false; //시저테스트 하지 않음
        desc.MultisampleEnable = false; //멀티 샘플링 하지않음
        desc.AntialiasedLineEnable = false; //라인안티앨리어싱 없음
        g_Device->CreateRasterizerState(&desc, &rasterizerState);
        g_DeviceContext->RSSetState(rasterizerState);
        rasterizerState->Release();
    }

    Mg = new MainGame();//할당
    Mg->Init();//초기화




    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();
    ImGui_ImplWin32_Init(g_hwnd);
    ImGui_ImplDX11_Init(g_Device, g_DeviceContext);


    //**메시지 루프**
    MSG msg;
    ZeroMemory(&msg, sizeof(MSG));

    // 기본 메시지 루프입니다:
    //런타임동안 반복시킬 반복문
    while (true)
    {
        //GetMessage 발생한메세지를 줄때까지 계속 기다려서 받는애
        //Peek 발생할때만 집어서 가져오는애
        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
        {
            //처리된 메세지가 QUIT이면 프로그램 종료
            if (msg.message == WM_QUIT)
            {
                break;
            }
            //발생한 메세지를 처리하는 함수
            //TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        else
        {
            //메세지를 집어오지 않을때
            //여기에서 
            TIMER->SetFrameRate(FIXFRAME);
            //메세지를 집어오지 않을때
            ImGui_ImplDX11_NewFrame();
            ImGui_ImplWin32_NewFrame();
            ImGui::NewFrame();
            Mg->Update();
            Mg->LateUpdate();
            Mg->Render();

        }
    }

    // Cleanup
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    //프로그램 종료 준비
    g_SwapChain->Release();
    g_Device->Release();
    g_DeviceContext->Release();
    g_RTV->Release();
    delete Mg; //소멸
     //생성된 윈도우 삭제
    DestroyWindow(g_hwnd);
    //등록된 프로그램 해제
    UnregisterClass(L"DX11", hInstance);

    return (int)msg.wParam;
}


// Forward declare message handler from imgui_impl_win32.cpp
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

//os가 호출해주는 함수
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, message, wParam, lParam))
        return true;
    //어떤 메세지가 발생되었는가를 통해 처리할 조건문
    switch (message)
    {
        //화면창 건들때 나오는 윈메세지
    case WM_MOUSEMOVE:
    {
        g_ScreenMouse.x = LOWORD(lParam);
        g_ScreenMouse.y = HIWORD(lParam);

        break;
    }
    //파괴하거나 닫으라는 메세지가 들어온경우
    case WM_DESTROY: case WM_CLOSE:
    {
        //프로그램 종료 호출 함수
        PostQuitMessage(0);
        break;
    }
    //아무키나 눌렀을때
    case WM_KEYDOWN:
    {
        // VK 버츄얼키 가상키
        if (wParam == VK_ESCAPE)
        {
            //프로그램 종료 호출 함수
            PostQuitMessage(0);
        }
        break;
    }
    
    }
    return (DefWindowProc(hWnd, message, wParam, lParam));
}

void SetWindowSize(int x, int y, int width, int height)
{
    //화면크기에 맞는 렉트
    RECT rc;
    rc.left = 0;
    rc.top = 0;
    rc.right = width;
    rc.bottom = height;

    //실제 윈도우 크기 조정
    AdjustWindowRect(&rc, WS_CAPTION | WS_SYSMENU, false);
    //위 RECT 정보로 윈도우 사이즈 세팅
    SetWindowPos(g_hwnd, NULL, x, y, (rc.right - rc.left), (rc.bottom - rc.top),
        SWP_NOZORDER | SWP_NOMOVE);
}