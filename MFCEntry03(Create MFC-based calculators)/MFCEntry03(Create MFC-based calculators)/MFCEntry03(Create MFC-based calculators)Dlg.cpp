
// MFCEntry03(Create MFC-based calculators)Dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCEntry03(Create MFC-based calculators).h"
#include "MFCEntry03(Create MFC-based calculators)Dlg.h"
#include "afxdialogex.h"

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


// CMFCEntry03CreateMFCbasedcalculatorsDlg 对话框



CMFCEntry03CreateMFCbasedcalculatorsDlg::CMFCEntry03CreateMFCbasedcalculatorsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCENTRY03CREATEMFCBASEDCALCULATORS_DIALOG, pParent)
	, DISPLAY(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCEntry03CreateMFCbasedcalculatorsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_DISPLAY, DISPLAY);
}

BEGIN_MESSAGE_MAP(CMFCEntry03CreateMFCbasedcalculatorsDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_CLEAR, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnClear)
	ON_BN_CLICKED(IDC_BTN_BACK, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnBack)
	ON_BN_CLICKED(IDC_BTN_LBRACKET, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnLbracket)
	ON_BN_CLICKED(IDC_BTN_RBRACKET, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnRbracket)
	ON_BN_CLICKED(IDC_BTN_1, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn1)
	ON_BN_CLICKED(IDC_BTN_2, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn2)
	ON_BN_CLICKED(IDC_BTN_3, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn3)
	ON_BN_CLICKED(IDC_BTN_4, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn4)
	ON_BN_CLICKED(IDC_BTN_5, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn5)
	ON_BN_CLICKED(IDC_BTN_6, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn6)
	ON_BN_CLICKED(IDC_BTN_7, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn7)
	ON_BN_CLICKED(IDC_BTN_8, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn8)
	ON_BN_CLICKED(IDC_BTN_9, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn9)
	ON_BN_CLICKED(IDC_BTN_0, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn0)
	ON_BN_CLICKED(IDC_BTN_POINT, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnPoint)
	ON_BN_CLICKED(IDC_BTN_ADD, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_MINUS, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnMinus)
	ON_BN_CLICKED(IDC_BTN_MULTIPLY, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnMultiply)
	ON_BN_CLICKED(IDC_BTN_DIVIDE, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnDivide)
	ON_BN_CLICKED(IDC_BTN_EQUAL, &CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnEqual)
END_MESSAGE_MAP()


// CMFCEntry03CreateMFCbasedcalculatorsDlg 消息处理程序

BOOL CMFCEntry03CreateMFCbasedcalculatorsDlg::OnInitDialog()
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

void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnPaint()
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
HCURSOR CMFCEntry03CreateMFCbasedcalculatorsDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnClear()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_ADD;
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnBack()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//移除最右边一个字符  
	if (!DISPLAY.IsEmpty())
	{
		DISPLAY = DISPLAY.Left(DISPLAY.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnLbracket()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += _T("(");
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnRbracket()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += _T(")");
	UpdateData(FALSE);;
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"1";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"2";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"3";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"4";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"5";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"6";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"7";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"8";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"9";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtn0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	DISPLAY += L"0";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnPoint()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);//如果没有小数点，则加上一个小数点，如果已有小数点就忽略此次的小数点，保证最多只有1个 
	if (-1 == DISPLAY.Find(L'.'))
	{
		DISPLAY += L".";
	}
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnAdd()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_ADD;
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnMinus()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_MINUS;
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnMultiply()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_MULTIPLY;
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnDivide()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_DIVIDE;
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::OnBnClickedBtnEqual()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::SaveFirstValue()		//保存第一个输入值
{
	UpdateData(TRUE);
	mNum1 = _wtof(DISPLAY);
	DISPLAY = L"";
	UpdateData(FALSE);
}


void CMFCEntry03CreateMFCbasedcalculatorsDlg::Calculator()      //计算
{
	UpdateData(TRUE);
	mNum2 = _wtof(DISPLAY);
	double result = 0.0f;
	switch (mFlag)
	{
	case FLAG_ADD:						//加  
		result = mNum1 + mNum2;
		break;
	case FLAG_MINUS:						//减 
		result = mNum1 - mNum2;
		break;
	case FLAG_MULTIPLY:					//乘  
		result = mNum1 * mNum2;
		break;
	case FLAG_DIVIDE:						//除  
		if (mNum2 == 0.0f)
		{
			result = mNum1;
		}
		else
		{
			result = mNum1 / mNum2;
		}
		break;
	//case FLAG_PINGFANG:					//平方 
	//	result = mNum2 * mNum2;
	//	break;
	//case FLAG_KAIFANG:					//开方  
	//	result = sqrt(mNum2);
	//	break;
	default:
		break;
	}
    //如果浮点数其实是个整数,就显示为整数
	if (result - int(result) <= 1e-5)
	{
		DISPLAY.Format(L"%d", (int)result);
	}
	else
	{
		DISPLAY.Format(L"%f", result);
	}
	UpdateData(FALSE);
	mNum1 = result;
	mNum2 = 0.0f;
}

