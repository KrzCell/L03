
#include <iostream>
using namespace std;

#define Zadanie3A

#ifdef Zadanie3A

int main()
{
	int n = 0, l = 0, liczba = 0;
	do
    {
		cout << "Wprowadz liczbe ";
		cin >> liczba;
		if ((liczba & 1) == 0)
			l++;
		n++;
	} while (l!=3);

	
}

#endif // Zadanie3A



