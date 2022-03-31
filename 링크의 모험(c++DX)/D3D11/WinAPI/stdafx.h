#pragma once

//c++
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <list>
#include <map>
//#include <forward_list>
using namespace std;

//c
#include <time.h>
#include <assert.h>
#include <Windows.h> //winapi
#include <tchar.h>

//DirectX d3d 11
#include <d3d11.h>
#include <d3dcompiler.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")

//DirectXTk SimpleMath
#include <SimpleMath.h>
using namespace DirectX;
using namespace SimpleMath;

//DirectXTex
#include <DirectXTex.h>
#pragma comment(lib, "directxtex.lib")

//Imgui
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#pragma comment(lib, "ImGuiL.lib")

//Fmod
#pragma comment (lib,"fmodL_vc.lib")
#include "fmod.hpp"





#include "UserDef.h"
#include "Util/Math.h"
#include "Object/VertexType.h"
#include "Object/Shader.h"
#include "Object/Object.h"
#include "Object/ObRect.h"
#include "Object/ObCircle.h"
#include "Object/ObLine.h"
#include "Object/ObStar.h"
#include "Object/ObImage.h"

#include "Util/Collision.h"

#include "Scene/Scene.h"

#include "Singleton/Singleton.h"
#include "Singleton/Input.h"
#include "Singleton/Timer.h"
#include "Singleton/Cam.h"
#include "Singleton/SceneManager.h"
#include "Singleton/Texture.h"
#include "Singleton/Sound.h"
#include "Singleton/Light.h"


#define  INPUT          Input::GetInstance()
#define  TIMER          Timer::GetInstance()
#define  DeltaTime      Timer::GetInstance()->GetDeltaTime()
#define  MAINCAM        Cam::GetInstance()
#define  SCENE          SceneManager::GetInstance()
#define  TEXTURE        Texture::GetInstance()
#define  SOUND          Sound::GetInstance()
#define  LIGHT          Light::GetInstance()
