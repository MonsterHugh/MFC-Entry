#pragma once


// CSendMessage 对话框

class CSendMessage : public CDialogEx
{
	DECLARE_DYNAMIC(CSendMessage)

public:
	CSendMessage(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSendMessage();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SENDMESSAGE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnSendmessage();
};
