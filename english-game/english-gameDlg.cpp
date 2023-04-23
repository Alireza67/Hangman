
// english-gameDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "english-game.h"
#include "english-gameDlg.h"
#include "afxdialogex.h"

#include <Mmsystem.h>

#include "databaseReader.h"

#include <filesystem>
namespace fs = std::filesystem;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
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


// CenglishgameDlg dialog



CenglishgameDlg::CenglishgameDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ENGLISHGAME_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CenglishgameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_btnA);
	DDX_Control(pDX, IDC_BUTTON2, m_btnB);
	DDX_Control(pDX, IDC_BUTTON3, m_btnC);
	DDX_Control(pDX, IDC_BUTTON4, m_btnD);
	DDX_Control(pDX, IDC_BUTTON5, m_btnE);
	DDX_Control(pDX, IDC_BUTTON6, m_btnF);
	DDX_Control(pDX, IDC_BUTTON7, m_btnG);
	DDX_Control(pDX, IDC_BUTTON8, m_btnH);
	DDX_Control(pDX, IDC_BUTTON9, m_btnI);
	DDX_Control(pDX, IDC_BUTTON10, m_btnJ);
	DDX_Control(pDX, IDC_BUTTON11, m_btnK);
	DDX_Control(pDX, IDC_BUTTON12, m_btnL);
	DDX_Control(pDX, IDC_BUTTON13, m_btnM);
	DDX_Control(pDX, IDC_BUTTON14, m_btnN);
	DDX_Control(pDX, IDC_BUTTON15, m_btnO);
	DDX_Control(pDX, IDC_BUTTON16, m_btnP);
	DDX_Control(pDX, IDC_BUTTON17, m_btnQ);
	DDX_Control(pDX, IDC_BUTTON18, m_btnR);
	DDX_Control(pDX, IDC_BUTTON19, m_btnS);
	DDX_Control(pDX, IDC_BUTTON20, m_btnT);
	DDX_Control(pDX, IDC_BUTTON21, m_btnU);
	DDX_Control(pDX, IDC_BUTTON22, m_btnV);
	DDX_Control(pDX, IDC_BUTTON23, m_btnW);
	DDX_Control(pDX, IDC_BUTTON24, m_btnX);
	DDX_Control(pDX, IDC_BUTTON25, m_btnY);
	DDX_Control(pDX, IDC_BUTTON26, m_btnZ);

	DDX_Control(pDX, IDC_EDIT1, m_edit1);
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_EDIT3, m_edit3);
	DDX_Control(pDX, IDC_EDIT4, m_edit4);
	DDX_Control(pDX, IDC_EDIT5, m_edit5);
	DDX_Control(pDX, IDC_EDIT6, m_edit6);
	DDX_Control(pDX, IDC_EDIT7, m_edit7);
	DDX_Control(pDX, IDC_EDIT8, m_edit8);
	DDX_Control(pDX, IDC_EDIT9, m_edit9);
	DDX_Control(pDX, IDC_EDIT10, m_edit10);
	DDX_Control(pDX, IDC_EDIT11, m_edit11);
	DDX_Control(pDX, IDC_EDIT12, m_edit12);
	DDX_Control(pDX, IDC_EDIT13, m_edit13);
	DDX_Control(pDX, IDC_EDIT14, m_edit14);
	DDX_Control(pDX, IDC_EDIT15, m_edit15);
	DDX_Control(pDX, IDC_EDIT16, m_edit16);
	DDX_Control(pDX, IDC_EDIT17, m_edit17);
	DDX_Control(pDX, IDC_EDIT18, m_edit18);
	DDX_Control(pDX, IDC_EDIT19, m_edit19);
	DDX_Control(pDX, IDC_EDIT20, m_edit20);
	DDX_Control(pDX, IDC_EDIT21, m_edit21);
	DDX_Control(pDX, IDC_EDIT23, m_edit23);
	DDX_Control(pDX, IDC_EDIT24, m_edit24);
	DDX_Control(pDX, IDC_EDIT25, m_edit25);
	DDX_Control(pDX, IDC_EDIT26, m_edit26);
	DDX_Control(pDX, IDC_EDIT27, m_edit27);
	DDX_Control(pDX, IDC_EDIT28, m_edit28);
	DDX_Control(pDX, IDC_EDIT29, m_edit29);
	DDX_Control(pDX, IDC_EDIT30, m_edit30);
	DDX_Control(pDX, IDC_EDIT31, m_edit31);
	DDX_Control(pDX, IDC_EDIT32, m_edit32);
	DDX_Control(pDX, IDC_EDIT33, m_edit33);
	DDX_Control(pDX, IDC_EDIT34, m_edit34);
	DDX_Control(pDX, IDC_EDIT35, m_edit35);
	DDX_Control(pDX, IDC_EDIT36, m_edit36);
	DDX_Control(pDX, IDC_EDIT37, m_edit37);
	DDX_Control(pDX, IDC_EDIT38, m_edit38);
	DDX_Control(pDX, IDC_EDIT39, m_edit39);
	DDX_Control(pDX, IDC_EDIT40, m_edit40);
	DDX_Control(pDX, IDC_EDIT41, m_edit41);
	DDX_Control(pDX, IDC_EDIT42, m_edit42);
	DDX_Control(pDX, IDC_EDIT43, m_edit43);

	DDX_Control(pDX, IDC_EDIT_HINT, m_editHint);
}

BEGIN_MESSAGE_MAP(CenglishgameDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CenglishgameDlg::GetA)
	ON_BN_CLICKED(IDC_BUTTON2, &CenglishgameDlg::GetB)
	ON_BN_CLICKED(IDC_BUTTON3, &CenglishgameDlg::GetC)
	ON_BN_CLICKED(IDC_BUTTON4, &CenglishgameDlg::GetD)
	ON_BN_CLICKED(IDC_BUTTON5, &CenglishgameDlg::GetE)
	ON_BN_CLICKED(IDC_BUTTON6, &CenglishgameDlg::GetF)
	ON_BN_CLICKED(IDC_BUTTON7, &CenglishgameDlg::GetG)
	ON_BN_CLICKED(IDC_BUTTON8, &CenglishgameDlg::GetH)
	ON_BN_CLICKED(IDC_BUTTON9, &CenglishgameDlg::GetI)
	ON_BN_CLICKED(IDC_BUTTON10, &CenglishgameDlg::GetJ)
	ON_BN_CLICKED(IDC_BUTTON11, &CenglishgameDlg::GetK)
	ON_BN_CLICKED(IDC_BUTTON12, &CenglishgameDlg::GetL)
	ON_BN_CLICKED(IDC_BUTTON13, &CenglishgameDlg::GetM)
	ON_BN_CLICKED(IDC_BUTTON14, &CenglishgameDlg::GetN)
	ON_BN_CLICKED(IDC_BUTTON15, &CenglishgameDlg::GetO)
	ON_BN_CLICKED(IDC_BUTTON16, &CenglishgameDlg::GetP)
	ON_BN_CLICKED(IDC_BUTTON17, &CenglishgameDlg::GetQ)
	ON_BN_CLICKED(IDC_BUTTON18, &CenglishgameDlg::GetR)
	ON_BN_CLICKED(IDC_BUTTON19, &CenglishgameDlg::GetS)
	ON_BN_CLICKED(IDC_BUTTON20, &CenglishgameDlg::GetT)
	ON_BN_CLICKED(IDC_BUTTON21, &CenglishgameDlg::GetU)
	ON_BN_CLICKED(IDC_BUTTON22, &CenglishgameDlg::GetV)
	ON_BN_CLICKED(IDC_BUTTON23, &CenglishgameDlg::GetW)
	ON_BN_CLICKED(IDC_BUTTON24, &CenglishgameDlg::GetX)
	ON_BN_CLICKED(IDC_BUTTON25, &CenglishgameDlg::GetY)
	ON_BN_CLICKED(IDC_BUTTON26, &CenglishgameDlg::GetZ)
END_MESSAGE_MAP()


// CenglishgameDlg message handlers

BOOL CenglishgameDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Initialize();
	SetFont();
	InitializeSounds();
	InitializeImages();
	InitializeLesson();
	ShowHangmanImage();
	auto lesson = GetLesson(L"lesson-1.json");
	SelectRandomTarget(lesson);
	ShowMainImage(target.imageName);

	CFont font;
	font.CreatePointFont(150, _T("Comic"));
	m_editHint.SetFont(&font);
	m_editHint.ModifyStyle(ES_AUTOVSCROLL, 0);
	m_editHint.ModifyStyle(ES_AUTOHSCROLL, 0);
	

	auto hintText = std::wstring(target.hint.begin(), target.hint.end());
	m_editHint.SetWindowText(hintText.c_str());


	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CenglishgameDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CenglishgameDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CenglishgameDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CenglishgameDlg::SetFont()
{
	CFont font;
	font.CreatePointFont(190, _T("Arial"));

	for (auto& item : edits)
	{
		item->SetFont(&font);
	}
}

void CenglishgameDlg::Initialize()
{
	InitializeEdits();
	InitializeBtns();
}

void CenglishgameDlg::InitializeEdits()
{
	edits.emplace_back(&m_edit1);
	edits.emplace_back(&m_edit2);
	edits.emplace_back(&m_edit3);
	edits.emplace_back(&m_edit4);
	edits.emplace_back(&m_edit5);
	edits.emplace_back(&m_edit6);
	edits.emplace_back(&m_edit7);
	edits.emplace_back(&m_edit8);
	edits.emplace_back(&m_edit9);
	edits.emplace_back(&m_edit10);
	edits.emplace_back(&m_edit11);
	edits.emplace_back(&m_edit12);
	edits.emplace_back(&m_edit13);
	edits.emplace_back(&m_edit14);
	edits.emplace_back(&m_edit15);
	edits.emplace_back(&m_edit16);
	edits.emplace_back(&m_edit17);
	edits.emplace_back(&m_edit18);
	edits.emplace_back(&m_edit19);
	edits.emplace_back(&m_edit20);
	edits.emplace_back(&m_edit21);
	edits.emplace_back(&m_edit23);
	edits.emplace_back(&m_edit24);
	edits.emplace_back(&m_edit25);
	edits.emplace_back(&m_edit26);
	edits.emplace_back(&m_edit27);
	edits.emplace_back(&m_edit28);
	edits.emplace_back(&m_edit29);
	edits.emplace_back(&m_edit30);
	edits.emplace_back(&m_edit31);
	edits.emplace_back(&m_edit32);
	edits.emplace_back(&m_edit33);
	edits.emplace_back(&m_edit34);
	edits.emplace_back(&m_edit35);
	edits.emplace_back(&m_edit36);
	edits.emplace_back(&m_edit37);
	edits.emplace_back(&m_edit38);
	edits.emplace_back(&m_edit39);
	edits.emplace_back(&m_edit40);
	edits.emplace_back(&m_edit41);
	edits.emplace_back(&m_edit42);
	edits.emplace_back(&m_edit43);

	for (auto& item : edits)
	{
		item->EnableWindow(FALSE);
	}
}

void CenglishgameDlg::InitializeImages()
{
	std::wstring buffer;
	auto size = ::GetCurrentDirectory(0, nullptr);
	buffer.resize(size - 1);
	::GetCurrentDirectory(size, const_cast<LPWSTR>(buffer.data()));
	imageDirectory = fs::path(buffer) / fs::path("images");
	hangmanDirectory = fs::path(buffer) / fs::path("hangman");
	
	mp_pictureControlMain = (CStatic*)GetDlgItem(IDC_PIC_MAIN);
	mp_pictureControlHangMan = (CStatic*)GetDlgItem(IDC_PIC_HANGMAN);
}

void CenglishgameDlg::InitializeSounds()
{
	std::wstring buffer;
	auto size = ::GetCurrentDirectory(0, nullptr);
	buffer.resize(size - 1);
	::GetCurrentDirectory(size, const_cast<LPWSTR>(buffer.data()));
	soundDirectory = fs::path(buffer) / fs::path("sounds");
	errorVoicePath = fs::path(soundDirectory) / fs::path("error.wav");
	correctVoicePath = fs::path(soundDirectory) / fs::path("correct.wav");
}

void CenglishgameDlg::InitializeLesson()
{
	std::wstring buffer;
	auto size = ::GetCurrentDirectory(0, nullptr);
	buffer.resize(size - 1);
	::GetCurrentDirectory(size, const_cast<LPWSTR>(buffer.data()));
	lessonsDirectory = fs::path(buffer) / fs::path("lessons");
}

std::vector<Expression> CenglishgameDlg::GetLesson(const std::wstring& fileName)
{
	std::wstring filePath = fs::path(lessonsDirectory) / fs::path(fileName);
	return DatabaseReader::ReadLesson(filePath);
}

void CenglishgameDlg::CheckWithTarget(CMFCButton* btn, const CString& input)
{
	auto key = target.key;
	std::transform(key.begin(), key.end(), key.begin(), [](unsigned char c) { return std::toupper(c); });
	std::string str(CW2A(input.GetString()));

	for (size_t i{}; i < key.size(); i++)
	{
		if (key[i] == str[0])
		{
			edits[i]->SetWindowText(input);
		}
	}

	if (key.find(str) == std::string::npos)
	{
		::PlaySound(errorVoicePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
		ChangeButtonToErrorMode(btn);
		DecreaseHealth();
		ShowHangmanImage();
	}
	else
	{
		::PlaySound(correctVoicePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
		ChangeButtonToCorrectMode(btn);
	}
}

void CenglishgameDlg::DecreaseHealth()
{
	errorNumber++;
	if (errorNumber >= 8)
	{
		errorNumber = 8;
	}
}

void CenglishgameDlg::ChangeButtonToCorrectMode(CMFCButton* btn)
{
	btn->EnableWindowsTheming(FALSE);
	btn->m_nFlatStyle = CMFCButton::BUTTONSTYLE_FLAT;
	btn->m_bTransparent = false;
	btn->SetFaceColor(RGB(153, 255, 153), true);
	btn->SetTextColor(RGB(0, 102, 51));
}

void CenglishgameDlg::SelectRandomTarget(const std::vector<Expression>& lesson)
{
	std::srand(std::time(nullptr));
	int randomNumber = std::rand() % lesson.size();
	target = lesson[randomNumber];
}

void CenglishgameDlg::ChangeButtonToErrorMode(CMFCButton* btn)
{
	btn->EnableWindowsTheming(FALSE);
	btn->m_nFlatStyle = CMFCButton::BUTTONSTYLE_FLAT;
	btn->m_bTransparent = false;
	btn->SetFaceColor(RGB(255, 153, 204), true);
	btn->SetTextColor(RGB(102, 0, 51));
}

void CenglishgameDlg::InitializeBtns()
{
	btns.emplace_back(&m_btnA);
	btns.emplace_back(&m_btnB);
	btns.emplace_back(&m_btnC);
	btns.emplace_back(&m_btnD);
	btns.emplace_back(&m_btnE);
	btns.emplace_back(&m_btnF);
	btns.emplace_back(&m_btnG);
	btns.emplace_back(&m_btnH);
	btns.emplace_back(&m_btnI);
	btns.emplace_back(&m_btnJ);
	btns.emplace_back(&m_btnK);
	btns.emplace_back(&m_btnL);
	btns.emplace_back(&m_btnM);
	btns.emplace_back(&m_btnN);
	btns.emplace_back(&m_btnO);
	btns.emplace_back(&m_btnP);
	btns.emplace_back(&m_btnQ);
	btns.emplace_back(&m_btnR);
	btns.emplace_back(&m_btnS);
	btns.emplace_back(&m_btnT);
	btns.emplace_back(&m_btnU);
	btns.emplace_back(&m_btnV);
	btns.emplace_back(&m_btnX);
	btns.emplace_back(&m_btnY);
	btns.emplace_back(&m_btnZ);
	btns.emplace_back(&m_btnW);

	ResetKeyboardButtons();
}

void CenglishgameDlg::ResetKeyboardButtons()
{
	for (auto& btn : btns)
	{
		btn->EnableWindowsTheming(TRUE);
		btn->m_nFlatStyle = CMFCButton::BUTTONSTYLE_FLAT;
		btn->m_bTransparent = false;
		btn->SetFaceColor(RGB(224, 224, 224), true);
		btn->SetTextColor(RGB(0, 0, 0));
		btn->SetFaceColor(RGB(224, 224, 224), true);
		btn->SetTextColor(RGB(0, 0, 0));
	}
}

void CenglishgameDlg::ShowMainImage(std::string& fileName)
{
	auto name = std::wstring(fileName.begin(), fileName.end());
	auto imagePath = std::wstring(fs::path(imageDirectory) / fs::path(name));
	viewImage.Load(imagePath.c_str());
	viewBitmap.Attach(viewImage.Detach());
	mp_pictureControlMain->SetBitmap((HBITMAP)viewBitmap.Detach());
}

void CenglishgameDlg::ShowHangmanImage()
{
	std::wstring name = L"hangman";
	auto number = std::to_wstring(errorNumber);
	auto fullName = name + number + L".jpg";
	auto imagePath = std::wstring(fs::path(hangmanDirectory) / fs::path(fullName));
	viewImage.Load(imagePath.c_str());
	viewBitmap.Attach(viewImage.Detach());
	mp_pictureControlHangMan->SetBitmap((HBITMAP)viewBitmap.Detach());
}

void CenglishgameDlg::GetA()
{
	CString strCaption;
	m_btnA.GetWindowText(strCaption);
	CheckWithTarget(&m_btnA, strCaption);
}

void CenglishgameDlg::GetB()
{
	CString strCaption;
	m_btnB.GetWindowText(strCaption);
	CheckWithTarget(&m_btnB, strCaption);
}

void CenglishgameDlg::GetC()
{
	CString strCaption;
	m_btnC.GetWindowText(strCaption);
	CheckWithTarget(&m_btnC, strCaption);
}

void CenglishgameDlg::GetD()
{
	CString strCaption;
	m_btnD.GetWindowText(strCaption);
	CheckWithTarget(&m_btnD, strCaption);
}

void CenglishgameDlg::GetE()
{
	CString strCaption;
	m_btnE.GetWindowText(strCaption);
	CheckWithTarget(&m_btnE, strCaption);
}

void CenglishgameDlg::GetF()
{
	CString strCaption;
	m_btnF.GetWindowText(strCaption);
	CheckWithTarget(&m_btnF, strCaption);
}

void CenglishgameDlg::GetG()
{
	CString strCaption;
	m_btnG.GetWindowText(strCaption);
	CheckWithTarget(&m_btnG, strCaption);
}

void CenglishgameDlg::GetH()
{
	CString strCaption;
	m_btnH.GetWindowText(strCaption);
	CheckWithTarget(&m_btnH, strCaption);
}

void CenglishgameDlg::GetI()
{
	CString strCaption;
	m_btnI.GetWindowText(strCaption);
	CheckWithTarget(&m_btnI, strCaption);
}

void CenglishgameDlg::GetJ()
{
	CString strCaption;
	m_btnJ.GetWindowText(strCaption);
	CheckWithTarget(&m_btnJ, strCaption);
}

void CenglishgameDlg::GetK()
{
	CString strCaption;
	m_btnK.GetWindowText(strCaption);
	CheckWithTarget(&m_btnK, strCaption);
}

void CenglishgameDlg::GetL()
{
	CString strCaption;
	m_btnL.GetWindowText(strCaption);
	CheckWithTarget(&m_btnL, strCaption);
}

void CenglishgameDlg::GetM()
{
	CString strCaption;
	m_btnM.GetWindowText(strCaption);
	CheckWithTarget(&m_btnM, strCaption);
}

void CenglishgameDlg::GetN()
{
	CString strCaption;
	m_btnN.GetWindowText(strCaption);
	CheckWithTarget(&m_btnN, strCaption);
}

void CenglishgameDlg::GetO()
{
	CString strCaption;
	m_btnO.GetWindowText(strCaption);
	CheckWithTarget(&m_btnO, strCaption);
}

void CenglishgameDlg::GetP()
{
	CString strCaption;
	m_btnP.GetWindowText(strCaption);
	CheckWithTarget(&m_btnP, strCaption);
}

void CenglishgameDlg::GetQ()
{
	CString strCaption;
	m_btnQ.GetWindowText(strCaption);
	CheckWithTarget(&m_btnQ, strCaption);
}

void CenglishgameDlg::GetR()
{
	CString strCaption;
	m_btnR.GetWindowText(strCaption);
	CheckWithTarget(&m_btnR, strCaption);
}

void CenglishgameDlg::GetS()
{
	CString strCaption;
	m_btnS.GetWindowText(strCaption);
	CheckWithTarget(&m_btnS, strCaption);
}

void CenglishgameDlg::GetT()
{
	CString strCaption;
	m_btnT.GetWindowText(strCaption);
	CheckWithTarget(&m_btnT, strCaption);
}

void CenglishgameDlg::GetU()
{
	CString strCaption;
	m_btnU.GetWindowText(strCaption);
	CheckWithTarget(&m_btnU, strCaption);
}

void CenglishgameDlg::GetV()
{
	CString strCaption;
	m_btnV.GetWindowText(strCaption);
	CheckWithTarget(&m_btnV, strCaption);
}

void CenglishgameDlg::GetW()
{
	CString strCaption;
	m_btnW.GetWindowText(strCaption);
	CheckWithTarget(&m_btnW, strCaption);
}

void CenglishgameDlg::GetX()
{
	CString strCaption;
	m_btnX.GetWindowText(strCaption);
	CheckWithTarget(&m_btnX, strCaption);
}

void CenglishgameDlg::GetY()
{
	CString strCaption;
	m_btnY.GetWindowText(strCaption);
	CheckWithTarget(&m_btnY, strCaption);
}

void CenglishgameDlg::GetZ()
{
	CString strCaption;
	m_btnZ.GetWindowText(strCaption);
	CheckWithTarget(&m_btnZ, strCaption);
}
