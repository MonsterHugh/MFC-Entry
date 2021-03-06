
// MFCEntry04(more line)Dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCEntry04(more line).h"
#include "MFCEntry04(more line)Dlg.h"
#include "afxdialogex.h"
#include "UserMessageInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCEntry04morelineDlg 对话框



CMFCEntry04morelineDlg::CMFCEntry04morelineDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCENTRY04MORELINE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCEntry04morelineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCEntry04morelineDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_OPENB, &CMFCEntry04morelineDlg::OnBnClickedBtnOpenb)
	ON_MESSAGE(WM_SENDMESSAGE, ShowMessageFromB)
	ON_MESSAGE(WM_THREADMESSAGE, &CMFCEntry04morelineDlg::OnThreadmessage)
	ON_BN_CLICKED(IDC_BTN_SHOW_MULTITHREADING_MESSAGE, &CMFCEntry04morelineDlg::OnBnClickedBtnShowMultithreadingMessage)
END_MESSAGE_MAP()


// CMFCEntry04morelineDlg 消息处理程序

BOOL CMFCEntry04morelineDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCEntry04morelineDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCEntry04morelineDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCEntry04morelineDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

LRESULT CMFCEntry04morelineDlg::ShowMessageFromB(WPARAM wParam, LPARAM lParam)
{
	wchar_t *temp = (wchar_t *)lParam;
	CString ptemp = temp;
	CEdit* editAt = (CEdit*) GetDlgItem(IDC_EDIT1);
	editAt->SetWindowTextW(ptemp);
	return 0;
}

void CMFCEntry04morelineDlg::OnBnClickedBtnOpenb()
{
	// TODO: 在此添加控件通知处理程序代码
	pSendMessage2DlgA = new CSendM;
	pSendMessage2DlgA->DoModal();
}
//SetDlgItemText(IDC_EDIT1, *temp);

afx_msg LRESULT CMFCEntry04morelineDlg::OnThreadmessage(WPARAM wParam, LPARAM lParam)
{
	CString *temp = (CString *)wParam;
	SetDlgItemText(IDC_EDIT1, *temp);
	return 0;
}

void thread_proc(LPVOID lPvoid)
{
	CString strEdit;
	for (int i = 0; i < 10; i++)
	{
		strEdit.Format(_T("线程内的值为：%d"), i);

		// 在线程中向主窗口发送自己的消息
		SendMessage(
			AfxGetApp()->GetMainWnd()->GetSafeHwnd(), // 获得主窗口在句柄
			WM_THREADMESSAGE,  // 发送自己的窗口消息
			(WPARAM)&strEdit,     // 设置发送的内容
			NULL);                // 预留参数为空
		Sleep(500);               // 使线程延时500毫秒，为了看清界面的数字变化
	}
}
void CMFCEntry04morelineDlg::OnBnClickedBtnShowMultithreadingMessage()
{
	// TODO: 在此添加控件通知处理程序代码
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)thread_proc, NULL, NULL, NULL);
}
