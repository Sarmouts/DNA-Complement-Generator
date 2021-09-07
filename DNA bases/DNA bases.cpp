
#include <iostream>
#include <string>
using namespace std;
string basePairs(string base)
{
	for (int i = 0; i <= base.length(); i++)
	{
		if (base[i] == 'A')
		{
			base[i] = 'T';
		}
		else if (base[i] == 'T')
		{
			base[i] = 'A';
		}
		else if (base[i] == 'C')
		{
			base[i] = 'G';
		}
		else if (base[i] == 'G')
		{
			base[i] = 'C';
		}
		else
		{
			return "Wrong input, please answer with these bases (A,C,G,T)";
			break;
		}
		return "The type of nucleotides of the other's DNA chain: " + base;
	}
}

int main()
{
	cout << "Welcome to MathFlare's early access DNA chain calculator" << endl;
	cout << "--------------------------------------------------------" << endl;
	while (true)
	{
		string base;
		cout << "Please answer with these bases(A, C, G, T)" << endl;
		cout << "------------------------------------------" << endl;
		cout << "Enter the type of nucleotides(Their Bases) of the one DNA chain: ";
		cin >> base;
		cout << basePairs(base) << endl;
		cout << "===============================================================================================" << endl;
	}
}

