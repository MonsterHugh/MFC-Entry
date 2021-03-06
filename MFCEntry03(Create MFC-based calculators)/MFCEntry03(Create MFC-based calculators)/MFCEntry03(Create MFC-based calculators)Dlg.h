
// MFCEntry03(Create MFC-based calculators)Dlg.h: 头文件
//

#pragma once

//运算符
enum CALCULATOR_FLAG{
	FLAG_ADD = 0,
	FLAG_MINUS,
	FLAG_MULTIPLY,
	FLAG_DIVIDE,
	FLAG_PINGFANG,
	FLAG_KAIFANG,
};

// CMFCEntry03CreateMFCbasedcalculatorsDlg 对话框
class CMFCEntry03CreateMFCbasedcalculatorsDlg : public CDialogEx
{
// 构造
public:
	CMFCEntry03CreateMFCbasedcalculatorsDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATORS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnClear();
	afx_msg void OnBnClickedBtnBack();
	afx_msg void OnBnClickedBtnLbracket();
	afx_msg void OnBnClickedBtnRbracket();
	afx_msg void OnBnClickedBtn1();
	afx_msg void OnBnClickedBtn2();
	afx_msg void OnBnClickedBtn3();
	afx_msg void OnBnClickedBtn4();
	afx_msg void OnBnClickedBtn5();
	afx_msg void OnBnClickedBtn6();
	afx_msg void OnBnClickedBtn7();
	afx_msg void OnBnClickedBtn8();
	afx_msg void OnBnClickedBtn9();
	afx_msg void OnBnClickedBtn0();
	afx_msg void OnBnClickedBtnPoint();
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnMinus();
	afx_msg void OnBnClickedBtnMultiply();
	afx_msg void OnBnClickedBtnDivide();
	afx_msg void OnBnClickedBtnEqual();
private:
	//编辑框内的字符串
	CString DISPLAY;	
	//输入的2个值  
	double mNum1;
	double mNum2;
	//运算符号
	CALCULATOR_FLAG mFlag;

public:
	void SaveFirstValue();		//保存第一个输入值
	void Calculator();			//计算

};
