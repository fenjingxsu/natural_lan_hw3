#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <wchar.h>

using namespace std;

int main()
{
	//fstream input;
	wifstream input("data1", ios::in);
	wstring tmp[166122];
	int i;
	for(i=0;i<166122;i++)
	{
		getline(input, tmp[i]);
	}
	for(i=0;i<166122;i++)
	{
		wprintf(L"%ls", tmp[i]);
	}
	wstring inp;
	wcin>>inp;
	wstring cut;
	cut = inp.substr(0, 1);
	wcout<<cut<<endl;
	/*for(i=0;i<166122;i++)
	{
		int res = wcsncmp(inp, tmp[i], 1);
		//if(res == 0)
			//cout<<tmp[i]<<endl;
	}*/
		
}
