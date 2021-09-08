
#include <iostream>
#include <string>
using namespace std;


string basePairs(string base)
{
	for (int i = 0; i < base.length(); i++)
	{
		if (!(base[i] == 'A' || base[i] == 'T' || base[i] == 'C' || base[i] == 'G'))
		{
			return "Wrong input, please answer with these bases (A,C,G,T)";
		}
	}
	for (int i = 0; i < base.length(); i++)
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
	}
	return base;
}
int main()
{
	cout << "Welcome to MathFlare's early access DNA Complement Generator" << endl;
	cout << "--------------------------------------------------------" << endl;
	while (true)
	{
		string base;
		cout << "Please answer with these bases(A, C, G, T)" << endl;
		cout << "------------------------------------------" << endl;
		cout << "Enter the type of nucleotides(Their Bases) of the one DNA string: ";
		cin >> base;
		if (basePairs(base) != "Wrong input, please answer with these bases (A,C,G,T)")
		{
			cout << "The type of nucleotides of the other's DNA string: " << basePairs(base) << endl << endl;
			cout << "     " << base << endl;
			cout << "DNA: ";
			for (int i = 0; i <= base.length(); i++)
			{
				if (i == base.length())
				{
					cout << endl;
				}
				else {
					cout << "|";
				}
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

