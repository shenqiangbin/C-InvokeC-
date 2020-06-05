#ifndef DLL_TEST_H_
#define DLL_TEST_H_

#ifdef DLLTEST_EXPORTS
#define DLL_TEST_API  __declspec(dllexport)
#else
#define DLL_TEST_API  __declspec(dllimport)
#endif

/*
自动标注入口函数，完成自动标注功能
src：源pdf输入路径
rule：规则输入路径
dst：结果xml输出路径
*/

extern "C" DLL_TEST_API int *goStart(const WCHAR *pStrConn, const WCHAR *pstrSimuationId, const WCHAR *pStrJson);

#endif