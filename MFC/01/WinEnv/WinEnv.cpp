// WinEnv.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void Env()
{
	LPSTR pszText = (LPSTR)GetEnvironmentStrings();
	LPSTR pszEnv = pszText;
	while(pszEnv[0])
	{
		printf("%s",pszEnv);
		pszEnv = pszEnv + strlen(pszEnv) + 1;
	}
	FreeEnvironmentStrings((LPWCH)pszText);
}

int _tmain(int argc, _TCHAR* argv[])
{
	Env();
	return 0;
}

