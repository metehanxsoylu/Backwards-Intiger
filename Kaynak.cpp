#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int findv(vector<int> vec,int kacinci) {
	int suankacinci = 1;

	vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		if (suankacinci == kacinci)
		{
			return *iter;
		}
		if (kacinci > vec.size())
		{
			break;
		}
		suankacinci++;
		iter++;
	}
}

void setv(vector<int> &vec, int kacinci, int newvalue) {
	int suankacinci = 1;
	vector<int>::iterator iter = vec.begin();

	if (kacinci > vec.size())
	{
		for (int i = 0; i < kacinci - vec.size(); i++) {
			vec.push_back(0);
		}
	}

	while (iter != vec.end())
	{
		if (suankacinci == kacinci)
		{
			*iter = newvalue;
		}
		if (kacinci > vec.size())
		{
			break;
		}
		suankacinci++;
		iter++;
	}
}

void printv(vector<int> vec, string alg) {
	vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter++ << alg;
	}
}

void logic(int sayi,int &ters,vector<int> &vec) {
	int basamaksayisi = log10(sayi) + 1;
	for (int i = 1; i <= basamaksayisi; i++)
	{
		int powersayi = pow(10, i);
		int basamaktakisayi = (sayi % powersayi) / pow(10,i-1);

		vec.push_back(basamaktakisayi);
	}
}


int main() {
	int sayi;
	int ters;

	vector<int> vec;
	cin >> sayi;

	logic(sayi,ters,vec);
	printv(vec, "");
}