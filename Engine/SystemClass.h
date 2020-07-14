#pragma once
#include <Windows.h>
#include "InputClass.h"
#include "GraphicsClass.h"

class SystemClass
{
public:
	SystemClass();
	SystemClass(const SystemClass&);
	virtual ~SystemClass();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

	LPCWSTR m_appName;
	HINSTANCE m_hInst;
	HWND m_hWnd;

	InputClass* m_Input;
	GraphicsClass* m_Graphics;
};
static SystemClass* AppHandle = NULL;