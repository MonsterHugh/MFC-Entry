
// MFCEntry04(more line)Dlg.h: 头文件
//

#pragma once
#include "CSendM.h"

// CMFCEntry04morelineDlg 对话框
class CMFCEntry04morelineDlg : public CDialogEx
{
// 构造
public:
	CMFCEntry04morelineDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GETM_DIALOG };
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
	afx_msg void OnBnClickedBtnOpenb();
public:
	CSendM *pSendMessage2DlgA;
public:
	afx_msg LRESULT ShowMessageFromB(WPARAM wParam, LPARAM lParam);
protected:
	afx_msg LRESULT OnThreadmessage(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedBtnShowMultithreadingMessage();
};
