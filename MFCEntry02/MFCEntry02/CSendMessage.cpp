// CSendMessage.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCEntry02.h"
#include "CSendMessage.h"
#include "afxdialogex.h"
#include "UserMessage.h"

// CSendMessage 对话框

IMPLEMENT_DYNAMIC(CSendMessage, CDialogEx)

CSendMessage::CSendMessage(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SENDMESSAGE_DIALOG, pParent)
{

}

CSendMessage::~CSendMessage()
{
}

void CSendMessage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSendMessage, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_SENDMESSAGE, &CSendMessage::OnBnClickedBtnSendmessage)
END_MESSAGE_MAP()


// CSendMessage 消息处理程序


void CSendMessage::OnBnClickedBtnSendmessage()//产生消息并向父类窗口发送
{
	// TODO: 在此添加控件通知处理程序代码
	wchar_t *str = _T("hello");
	int count = 12;
	HWND hWnd = ::GetParent(m_hWnd);
	::SendMessage(hWnd, WM_SENDMESSAGE, count, (LPARAM)str);
	::EndDialog(m_hWnd, 0);
}
