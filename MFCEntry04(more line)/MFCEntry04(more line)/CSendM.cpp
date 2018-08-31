// CSendM.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCEntry04(more line).h"
#include "CSendM.h"
#include "afxdialogex.h"
#include "UserMessageInfo.h"

// CSendM 对话框

IMPLEMENT_DYNAMIC(CSendM, CDialogEx)

CSendM::CSendM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SENDM_DIALOG, pParent)
{

}

CSendM::~CSendM()
{
}

void CSendM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSendM, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_SENDM, &CSendM::OnBnClickedBtnSendm)
END_MESSAGE_MAP()


// CSendM 消息处理程序


void CSendM::OnBnClickedBtnSendm()
{
	// TODO: 在此添加控件通知处理程序代码
	wchar_t *strEdit = _T("hello world!");
	int count = 12;
	HWND hWnd = ::GetParent(m_hWnd);
	::SendMessage(hWnd, WM_SENDMESSAGE, count, (LPARAM)strEdit);
	::EndDialog(m_hWnd, 0);
}
