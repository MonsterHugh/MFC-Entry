#pragma once


// CSendM 对话框

class CSendM : public CDialogEx
{
	DECLARE_DYNAMIC(CSendM)

public:
	CSendM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSendM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SENDM_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnSendm();
};
