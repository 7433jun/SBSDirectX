#pragma once
class Engine
{
private:
	Engine() = default;
	~Engine() = default;
public:
	static Engine& Get()
	{
		static Engine instance;
		return instance;
	}
public:
	Engine(const Engine&) = delete;
	Engine& operator=(const Engine&) = delete;

private:
	HWND hwnd;
	int width;
	int height;
	bool windowed;

	D3D12_VIEWPORT viewPort = {};
	D3D12_RECT scissorRect = {};

	shared_ptr<class Device> device;
	shared_ptr<class CommandQueue> cmdQueue;
	shared_ptr<class SwapChain> swapChain;
public:
	void Init(HWND _hwnd, int _width, int _height, bool _windowed);
	void Render();
public:
	void RenderBegin();
	void RenderEnd();
	void ResizeWindow(int _width, int _height);
};

