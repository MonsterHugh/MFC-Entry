
// MFCEntry01Dlg.h : header file
//

#pragma once


// CMFCEntry01Dlg dialog
class CMFCEntry01Dlg : public CDialogEx
{
// Construction
public:
	CMFCEntry01Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCENTRY01_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CEdit m_Text1;
	CString m_Text2;
	CEdit m_text;
	afx_msg void OnBnClickedButton1();
	CString m_text1;
};
