
// CJCKSystem.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CCJCKSystemApp:
// このクラスの実装については、CJCKSystem.cpp を参照してください。
//

class CCJCKSystemApp : public CWinApp
{
public:
	CCJCKSystemApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CCJCKSystemApp theApp;
