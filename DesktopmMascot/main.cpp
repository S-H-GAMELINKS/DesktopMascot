// loding DxLib
#include "DxLib.h"

//main
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	DxLib::ChangeWindowMode(TRUE);

	if (DxLib::DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	while (DxLib::CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		DxLib::PlayMovie("anim.gif", 1, DX_MOVIEPLAYTYPE_NORMAL);
	}

	DxLib::DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}