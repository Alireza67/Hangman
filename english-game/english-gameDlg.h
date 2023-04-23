
// english-gameDlg.h : header file
//

#pragma once
#include <vector>
#include <string>
#include <atlimage.h>
#include "structs.h"

// CenglishgameDlg dialog
class CenglishgameDlg : public CDialogEx
{
// Construction
public:
	CenglishgameDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ENGLISHGAME_DIALOG };
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
	void SetFont();
	void Initialize();
	void InitializeBtns();
	void ResetKeyboardButtons();
	void InitializeEdits();
	void InitializeImages();
	void InitializeSounds();
	void InitializeLesson();

	std::vector<Expression> GetLesson(const std::wstring& fileName);
	void CheckWithTarget(CMFCButton* btn, const CString& input);
	void DecreaseHealth();
	void ChangeButtonToCorrectMode(CMFCButton* btn);
	void ChangeButtonToErrorMode(CMFCButton* btn);
	void ShowMainImage(std::wstring& fileName);
	void ShowHangmanImage();

	afx_msg void GetA();
	afx_msg void GetB();
	afx_msg void GetC();
	afx_msg void GetD();
	afx_msg void GetE();
	afx_msg void GetF();
	afx_msg void GetG();
	afx_msg void GetH();
	afx_msg void GetI();
	afx_msg void GetJ();
	afx_msg void GetK();
	afx_msg void GetL();
	afx_msg void GetM();
	afx_msg void GetN();
	afx_msg void GetO();
	afx_msg void GetP();
	afx_msg void GetQ();
	afx_msg void GetR();
	afx_msg void GetS();
	afx_msg void GetT();
	afx_msg void GetU();
	afx_msg void GetV();
	afx_msg void GetW();
	afx_msg void GetX();
	afx_msg void GetY();
	afx_msg void GetZ();

	std::string target_{ "MECHANIC" };
	
	CMFCButton m_btnA, m_btnB, m_btnC, m_btnD, m_btnE, m_btnF;
	CMFCButton m_btnG, m_btnH, m_btnI, m_btnJ, m_btnK, m_btnL;
	CMFCButton m_btnM, m_btnN, m_btnO, m_btnP, m_btnQ, m_btnR;
	CMFCButton m_btnS, m_btnT, m_btnU, m_btnV, m_btnW, m_btnX;
	CMFCButton m_btnY, m_btnZ;
	std::vector<CMFCButton*> btns;

	CEdit m_edit1, m_edit2, m_edit3, m_edit4;
	CEdit m_edit5, m_edit6, m_edit7, m_edit8;
	std::vector<CEdit*> edits;

	CStatic* mp_pictureControlMain;
	CStatic* mp_pictureControlHangMan;
	CImage viewImage;
	CBitmap viewBitmap;
	std::wstring imageDirectory;
	std::wstring hangmanDirectory;

	std::wstring soundDirectory;
	std::wstring errorVoicePath;
	std::wstring correctVoicePath;

	std::wstring lessonsDirectory;

	uint8_t errorNumber{ 1 };
};
