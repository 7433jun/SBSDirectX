#pragma once
class Mesh
{
private:
	// 정점 버퍼 리소스를 관리하는 스마트 포인터
	ComPtr<ID3D12Resource> vertexBuffer;
	// 정점 버퍼 뷰 구조체 초기화
	D3D12_VERTEX_BUFFER_VIEW vertexBufferView = {};
	int vertexCount = 0; // 정점 개수를 저장
public:
	void Init(vector<Vertex>& vec);
	void Render();
};

