
// StudyELF.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CStudyELFApp:
// �йش����ʵ�֣������ StudyELF.cpp
//

class CStudyELFApp : public CWinApp
{
public:
	CStudyELFApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CStudyELFApp theApp;