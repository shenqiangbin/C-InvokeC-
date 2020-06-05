#include "stdafx.h"
#include "dllTestExport.h"
#include <string>
#include <fstream>
#include <iostream>


extern "C" DLL_TEST_API int *goStart(const WCHAR *pStrConn, const WCHAR *pstrSimuationId, const WCHAR *pStrJson)
{
	int *nRet = 0;

	std::wofstream ofs;
	ofs.open(_T("D:\\text.txt"), std::ios::out);
	if (pStrConn != nullptr)
	{
		ofs << pStrConn << _T("\n");
	}
	if (pstrSimuationId != nullptr)
	{
		ofs << pstrSimuationId << _T("\n");
	}
	if (pStrJson != nullptr)
	{
		ofs << pStrJson << _T("\n");
	}

	ofs.close();

	return nRet;
}