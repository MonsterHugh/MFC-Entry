
// MFCEntry02Dlg.h: 头文件
//

#pragma once
#include"CSendMessage.h"

// CMFCEntry02Dlg 对话框
class CMFCEntry02Dlg : public CDialogEx
{
// 构造
public:
	CMFCEntry02Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GETMESSAGE_DIALOG };
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
	afx_msg void OnBnClickedBtnOpenB();
public:
	CSendMessage *BDlg;//实例化B的BUtton类对象
public:
	afx_msg LRESULT ShowMessageFromB(WPARAM wParam, LPARAM lParam);//声明显示成员函数
};
