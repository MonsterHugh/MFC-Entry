
// MFCEntry01.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCEntry01App:
// See MFCEntry01.cpp for the implementation of this class
//

class CMFCEntry01App : public CWinApp
{
public:
	CMFCEntry01App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCEntry01App theApp;
