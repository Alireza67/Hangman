
// english-gameDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "english-game.h"
#include "english-gameDlg.h"
#include "afxdialogex.h"

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

void CenglishgameDlg::GetA()
{
	CString strCaption;
	m_btnA.GetWindowText(strCaption);
}

void CenglishgameDlg::GetB()
{
	CString strCaption;
	m_btnB.GetWindowText(strCaption);
}

void CenglishgameDlg::GetC()
{
	CString strCaption;
	m_btnC.GetWindowText(strCaption);
}

void CenglishgameDlg::GetD()
{
	CString strCaption;
	m_btnD.GetWindowText(strCaption);
}

void CenglishgameDlg::GetE()
{
	CString strCaption;
	m_btnE.GetWindowText(strCaption);
}

void CenglishgameDlg::GetF()
{
	CString strCaption;
	m_btnF.GetWindowText(strCaption);
}

void CenglishgameDlg::GetG()
{
	CString strCaption;
	m_btnG.GetWindowText(strCaption);
}

void CenglishgameDlg::GetH()
{
	CString strCaption;
	m_btnH.GetWindowText(strCaption);
}

void CenglishgameDlg::GetI()
{
	CString strCaption;
	m_btnI.GetWindowText(strCaption);
}

void CenglishgameDlg::GetJ()
{
	CString strCaption;
	m_btnJ.GetWindowText(strCaption);
}

void CenglishgameDlg::GetK()
{
	CString strCaption;
	m_btnK.GetWindowText(strCaption);
}

void CenglishgameDlg::GetL()
{
	CString strCaption;
	m_btnL.GetWindowText(strCaption);
}

void CenglishgameDlg::GetM()
{
	CString strCaption;
	m_btnM.GetWindowText(strCaption);
}

void CenglishgameDlg::GetN()
{
	CString strCaption;
	m_btnN.GetWindowText(strCaption);
}

void CenglishgameDlg::GetO()
{
	CString strCaption;
	m_btnO.GetWindowText(strCaption);
}

void CenglishgameDlg::GetP()
{
	CString strCaption;
	m_btnP.GetWindowText(strCaption);
}

void CenglishgameDlg::GetQ()
{
	CString strCaption;
	m_btnQ.GetWindowText(strCaption);
}

void CenglishgameDlg::GetR()
{
	CString strCaption;
	m_btnR.GetWindowText(strCaption);
}

void CenglishgameDlg::GetS()
{
	CString strCaption;
	m_btnS.GetWindowText(strCaption);
}

void CenglishgameDlg::GetT()
{
	CString strCaption;
	m_btnT.GetWindowText(strCaption);
}

void CenglishgameDlg::GetU()
{
	CString strCaption;
	m_btnU.GetWindowText(strCaption);
}

void CenglishgameDlg::GetV()
{
	CString strCaption;
	m_btnV.GetWindowText(strCaption);
}

void CenglishgameDlg::GetW()
{
	CString strCaption;
	m_btnW.GetWindowText(strCaption);
}

void CenglishgameDlg::GetX()
{
	CString strCaption;
	m_btnX.GetWindowText(strCaption);
}

void CenglishgameDlg::GetY()
{
	CString strCaption;
	m_btnY.GetWindowText(strCaption);
}

void CenglishgameDlg::GetZ()
{
	CString strCaption;
	m_btnZ.GetWindowText(strCaption);
}