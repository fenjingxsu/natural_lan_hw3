#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <wchar.h>

using namespace std;
void compare()
{
	
}

int main()
{
	//fstream input;
	std::locale::global (std::locale ("zh_TW.UTF-8"));
	wifstream input("data1", ios::in);
	wstring tmp[166122];
	int i;
	for(i=0;i<166122;i++)
	{
		getline(input, tmp[i]);
	}
	/*for(i=0;i<166122;i++)
	{
		wcout<<L""<<tmp[i]<<endl;
	}*/
	wstring inp;
	wcin>>inp;
	wstring cut;
	cut = inp.substr(0, 1);
	int j=1, comp, m, check;
	//int* res = new int[j];
	//wstring* res_c = new wstring[j];
	int res;
	//wcout<<L""<<cut<<endl;
	for(i=0;i<166122;i++)
	{
		comp = inp.find(tmp[i]);
		if(comp > 0)
			wcout<<L""<<comp<<"/"<<tmp[i]<<endl;
		/*if(comp>0)
		{
			res[j] = comp;
			std::size_t aa = tmp[i].copy(res_c[res[j]], tmp[i].length(), 0);
			//wcout<<L""<<res[j]<<tmp[i]<<endl;
			size_t newj = j*2;
			int* newres = new int[newj];
			wstring* newres_c = new wstring[newj];
			memcpy(newres, res, j * sizeof(int));
			memcpy(newres_c, res_c, j * sizeof(wstring));
			j=newj;
			delete [] res;
			delete [] res_c;
			res = newres;
			res = newres_c;
		}*/
	}
		
}
