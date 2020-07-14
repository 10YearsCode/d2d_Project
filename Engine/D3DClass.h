#pragma once
#include <d3d11.h>
#include <DirectXMath.h>

// DirectX 3D의 그래픽을 설정하는 클래스
class D3DClass
{
public:
	D3DClass();
	D3DClass(const D3DClass&);
	virtual ~D3DClass();


	bool Initialize(int sWidth, int sHeight, bool vSync, HWND hWnd, bool fs, float sDepth, float sNear);
	void Shutdown();

	ID3D11Device* GetDevice();
	ID3D11DeviceContext* GetDeviceContext();


	bool m_vSync_Enabled;
	int m_VgaMemory;

	char m_VgaDesc[128];
	
	IDXGISwapChain* m_swapChain;
	ID3D11Device* m_device;
	ID3D11DeviceContext* m_deviceContext;
	ID3D11RenderTargetView* m_renderTargetView;
	ID3D11Texture2D* m_depthStencilBuffer;
	ID3D11DepthStencilState* m_depthStencilState;
	ID3D11DepthStencilView* m_depthStencilView;
	ID3D11RasterizerState* m_rasterState;
	DirectX::XMMATRIX m_projectionMatrix;
	DirectX::XMMATRIX m_worldMatrix;
	DirectX::XMMATRIX m_orthoMatrix;

};

