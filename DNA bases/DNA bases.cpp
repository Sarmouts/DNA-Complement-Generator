
#include <iostream>
#include <string>
using namespace std;
string basePairs(string base)
{
	int i = 0;
	for (; i <= base.length(); i++)
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
			break;
		}
	}
	if (i == base.length()) return base;
	else return "Wrong input, please answer with these bases (A,C,G,T)";
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
		if (basePairs(base) != "Wrong input, please answer with these bases (A,C,G,T)")
		{
			cout << "The type of nucleotides of the other's DNA chain: " << basePairs(base) << endl << endl;
			cout << "     " << base << endl;
			cout << "DNA: ";
			for (int i = 0; i <= base.length(); i++)
			{
				if (i == base.length())
				{
					cout << endl;
				}
				else cout << "|";
			}
			cout << "     " << basePairs(base) << endl;
			cout << "===============================================================================================" << endl;
		}
		else
		{
			cout << basePairs(base) << endl;
			cout << "===============================================================================================" << endl;
		}
	}
}

