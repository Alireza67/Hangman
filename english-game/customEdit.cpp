#include "pch.h"
#include "customEdit.h"

BEGIN_MESSAGE_MAP(CustomEdit, CEdit)
    ON_WM_CTLCOLOR_REFLECT()
END_MESSAGE_MAP()


HBRUSH CustomEdit::CtlColor(CDC* pDC, UINT nCtlColor)
{
	COLORREF color = RGB(245, 245, 245);
	pDC->SetTextColor(RGB(105, 105, 105));
	pDC->SetBkColor(color);
	return CreateSolidBrush(color);
}
