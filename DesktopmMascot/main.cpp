// loding DxLib
#include "DxLib.h"

//main
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	DxLib::ChangeWindowMode(TRUE);

	if (DxLib::DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	while (DxLib::CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		DxLib::PlayMovie("anim.gif", 1, DX_MOVIEPLAYTYPE_NORMAL);
	}

	DxLib::DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}