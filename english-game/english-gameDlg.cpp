
// english-gameDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "english-game.h"
#include "english-gameDlg.h"
#include "afxdialogex.h"

#include <Mmsystem.h>

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
	InitializeMainImage();

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
	font.CreatePointFont(310, _T("Arial")); // replace 120 with the font size you want

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

	for (auto& item : edits)
	{
		item->EnableWindow(FALSE);
	}
}

void CenglishgameDlg::InitializeMainImage()
{
	std::wstring buffer;
	auto size = ::GetCurrentDirectory(0, nullptr);
	buffer.resize(size - 1);
	::GetCurrentDirectory(size, const_cast<LPWSTR>(buffer.data()));
	imageDirectory = fs::path(buffer) / fs::path("images");
	
	mp_pictureControl = (CStatic*)GetDlgItem(IDC_PIC_MAIN);	
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

void CenglishgameDlg::CheckWithTarget(const CString& input)
{
	std::string str(CW2A(input.GetString()));

	for (size_t i{}; i < target_.size(); i++)
	{
		if (target_[i] == str[0])
		{
			edits[i]->SetWindowText(input);
		}
	}

	if (target_.find(str) == std::string::npos)
	{
		::PlaySound(errorVoicePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
	}
	else
	{
		::PlaySound(correctVoicePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
	}
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
}

void CenglishgameDlg::GetA()
{
	CString strCaption;
	m_btnA.GetWindowText(strCaption);
	CheckWithTarget(strCaption);

	std::wstring fileName = L"mechanic.jpg";
	ShowMainImage(fileName);
}

void CenglishgameDlg::ShowMainImage(std::wstring& fileName)
{
	auto imagePath = std::wstring(fs::path(imageDirectory) / fs::path(fileName));
	viewImage.Load(imagePath.c_str());
	viewBitmap.Attach(viewImage.Detach());
	mp_pictureControl->SetBitmap((HBITMAP)viewBitmap.Detach());
}

void CenglishgameDlg::GetB()
{
	CString strCaption;
	m_btnB.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetC()
{
	CString strCaption;
	m_btnC.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetD()
{
	CString strCaption;
	m_btnD.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetE()
{
	CString strCaption;
	m_btnE.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetF()
{
	CString strCaption;
	m_btnF.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetG()
{
	CString strCaption;
	m_btnG.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetH()
{
	CString strCaption;
	m_btnH.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetI()
{
	CString strCaption;
	m_btnI.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetJ()
{
	CString strCaption;
	m_btnJ.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetK()
{
	CString strCaption;
	m_btnK.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetL()
{
	CString strCaption;
	m_btnL.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetM()
{
	CString strCaption;
	m_btnM.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetN()
{
	CString strCaption;
	m_btnN.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetO()
{
	CString strCaption;
	m_btnO.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetP()
{
	CString strCaption;
	m_btnP.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetQ()
{
	CString strCaption;
	m_btnQ.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetR()
{
	CString strCaption;
	m_btnR.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetS()
{
	CString strCaption;
	m_btnS.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetT()
{
	CString strCaption;
	m_btnT.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetU()
{
	CString strCaption;
	m_btnU.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetV()
{
	CString strCaption;
	m_btnV.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetW()
{
	CString strCaption;
	m_btnW.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetX()
{
	CString strCaption;
	m_btnX.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetY()
{
	CString strCaption;
	m_btnY.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}

void CenglishgameDlg::GetZ()
{
	CString strCaption;
	m_btnZ.GetWindowText(strCaption);
	CheckWithTarget(strCaption);
}