#ifndef DLL_TEST_H_
#define DLL_TEST_H_

#ifdef DLLTEST_EXPORTS
#define DLL_TEST_API  __declspec(dllexport)
#else
#define DLL_TEST_API  __declspec(dllimport)
#endif

/*
�Զ���ע��ں���������Զ���ע����
src��Դpdf����·��
rule����������·��
dst�����xml���·��
*/

extern "C" DLL_TEST_API int *goStart(const WCHAR *pStrConn, const WCHAR *pstrSimuationId, const WCHAR *pStrJson);

#endif