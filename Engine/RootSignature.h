#pragma once
class RootSignature
{
private:
	// ��Ʈ �ñ״�ó ��ü�� �����ϴ� ����Ʈ ������
	ComPtr<ID3D12RootSignature> signature;
public:
	// ��Ʈ �ñ״�ó�� ��ȯ�ϴ� Get �Լ�
	ComPtr<ID3D12RootSignature> GetSignature() { return signature; }

public:
	// �־��� ����̽��� ����Ͽ� ��Ʈ �ñ״�ó�� �ʱ�ȭ
	void Init(ComPtr<ID3D12Device> device);
};
