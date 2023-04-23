#pragma once
#include <afxwin.h>

class CustomEdit : public CEdit
{
protected:
	HBRUSH CtlColor(CDC* pDC, UINT);
	DECLARE_MESSAGE_MAP()
};
