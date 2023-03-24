#include <iostream>
#include <string>
using namespace std;
bool IsPeriod(int k, string txt)
{
	if (k <= 0)
	{	
		cout << "You are cringe" << endl;
		return 0;
	}
	else 
	{	
		int biba = 0;
		int result = 0;
		int sizz = txt.size();
		char* now = new char[sizz + 1];//массив букв из строки;
		char* bukovs = new char[k + 1];//массив букв первого вхождени€ дл€ вы€влени€ переодичности;


		for (int i = 0; i <= sizz; i++) //запись строки в виде массива;
		{
			now[i] = txt[i];
			cout << now[i];
		}
		for (int i = 0; i <= k; i++)
		{
			bukovs[i] = now[i];
			cout << endl;
			cout << bukovs[i] << endl;
		}
		for (int i = 0;i<sizz;i++)//алгоритм в котором идЄм по пор€дку чтобы увидеть переодичность
		{

			if (now[i]==bukovs[biba])
			{
				result += 1;
			}
			biba++;
			if (biba == k)
			{
				biba = 0;
			}
		}
		if (result == sizz)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	

	/*for (int i = 0; i <= sizz; i++)//варик реализовать и это но чЄт как то не пон€тно;
		{
			for (int j = 0; j <= k; j++)
			{
				if (now[i] == bukovs[j])
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}*/

		delete[] now;
		delete[] bukovs;
	}

}
void IfIsPeriod(int k,string txt)
{
	if (IsPeriod(k, txt) == true)
	{
		cout << "This pair is periodic" << endl;
	}
	else
	{
		cout << "This pair is not periodic" << endl;
	}

}

int main() 
{	


	IfIsPeriod(3, "hehehehe");
	return 0;
}