
#include <iostream>
using namespace std;

#define Zadanie3A

#ifdef Zadanie3A

int main()
{
	int n = 0, l = 0, liczba = 0;
	double silnia = 1;
	do
    {
		cout << "Wprowadz liczbe ";
		cin >> liczba;
		if ((liczba & 1) == 0)
			l++;
		n++;
	} while (l!=3);
	
	for (int i = n; i > 1; i--)
		silnia *= i;
	cout << n << "! = " << silnia << endl;
	
}

#endif // Zadanie3A



