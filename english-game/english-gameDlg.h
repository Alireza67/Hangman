
// english-gameDlg.h : header file
//

#pragma once
#include <vector>
#include <string>
#include <functional>
#include <map>

#include <atlimage.h>

#include "structs.h"
#include "customEdit.h"

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
	void CalculateNumberOfLetter();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()
public:
	void SetFont();
	void Initialize();
	void InitializeHint();
	void InitializeBtns();
	void ConnectKeyboard();
	void InitializeEdits();
	void InitializeImages();
	void InitializeSounds();
	void InitializeLesson();
	void InitializeNextButton();
	void ResetKeyboardButtons();

	void DecreaseHealth();
	void ShowHangmanImage();
	void UpdateHint(const std::string& hint);
	void ShowMainImage(std::string& fileName);
	void ResetDisplay(const std::string& input);
	void ChangeButtonToErrorMode(CMFCButton* btn);
	void ChangeButtonToCorrectMode(CMFCButton* btn);
	void CheckImage(std::vector<Expression>& lesson);
	void SelectRandomTarget(const std::vector<Expression>& lesson);
	void CheckWithTarget(CMFCButton* btn, const CString& input);
	void ShowAnswer(std::string& key);
	std::vector<Expression> GetLesson(const std::wstring& fileName);

	afx_msg void GoNext();

	void ResetBtns();

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
	std::map<uint32_t, std::function<void()>>mapFunction;

	Expression target;
	uint16_t targetIndex{};
	std::vector<Expression> lesson;
	
	CMFCButton m_btnA, m_btnB, m_btnC, m_btnD, m_btnE, m_btnF;
	CMFCButton m_btnG, m_btnH, m_btnI, m_btnJ, m_btnK, m_btnL;
	CMFCButton m_btnM, m_btnN, m_btnO, m_btnP, m_btnQ, m_btnR;
	CMFCButton m_btnS, m_btnT, m_btnU, m_btnV, m_btnW, m_btnX;
	CMFCButton m_btnY, m_btnZ;
	std::vector<CMFCButton*> btns;

	CMFCButton next;

	CEdit m_edit1, m_edit2, m_edit3, m_edit4, m_edit5, m_edit6, m_edit7, m_edit8;
	CEdit m_edit9, m_edit10, m_edit11, m_edit12, m_edit13, m_edit14, m_edit15, m_edit16;
	CEdit m_edit17, m_edit18, m_edit19, m_edit20, m_edit21, m_edit23, m_edit24, m_edit25;
	CEdit m_edit26, m_edit27, m_edit28, m_edit29, m_edit30, m_edit31, m_edit32, m_edit33;
	CEdit m_edit34, m_edit35, m_edit36, m_edit37, m_edit38, m_edit39, m_edit40, m_edit41;
	CEdit m_edit42, m_edit43;
	CustomEdit m_editHint;
	std::vector<CEdit*> edits;

	CStatic* mp_pictureControlMain;
	CStatic* mp_pictureControlHangMan;
	CImage viewImage;
	CBitmap viewBitmap;
	std::wstring imageDirectory;
	std::wstring hangmanDirectory;

	std::wstring soundDirectory;
	std::wstring errorVoicePath;
	std::wstring loseVoicePath;
	std::wstring correctVoicePath;
	std::wstring winVoicePath;

	std::wstring lessonsDirectory;

	uint8_t errorNumber{ 1 };
	int16_t numberOfLetter{};
};
