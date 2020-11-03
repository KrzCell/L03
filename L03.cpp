
#include <iostream>
#include <time.h>
#include <cstdio>
using namespace std;

#define Zadanie3B

#ifdef Zadanie3A

int main()
{
	int n = 0, l = 0, liczba = 0;
	int zmienna, fib1 = 1, fib2 = 1;
	double silnia = 1;
	do
    {
		cout << "Wprowadz liczbe ";
		cin >> liczba;
		if (liczba > 0)
		{
			if ((liczba & 1) == 0)
				l++;
			n++;
		}
	} while (l!=3);
	
	//silnia

	for (int i = n; i > 1; i--)
		silnia *= i;
	cout << n << "! = " << silnia << endl;

	//ciag fibonacciego
	
	if (n <= 2)
	{
		fib1 = 1;
		cout << n << " wyraz ciagu Fibonacciego wynosi -> "<< fib1 << endl;
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			zmienna = fib1 + fib2;
			fib1 = fib2;
			fib2 = zmienna;
		}
		cout << n << " wyraz ciagu Fibonacciego wynosi -> " << fib2 << endl;
	}
}

#endif // Zadanie3A

#ifdef Zadanie3B
int main()
{
	double x = 0, wynik = 1;
	int n = 0;
	do
	{
		cout << "Podaj liczbe naturalna dodatnia (wykladnik) -> ";
		cin >> n;
	} while (n < 0);

	cout << "Podaj liczbe rzeczywista (podstawe) -> ";
	cin >> x;

	for (int i = 1; i < n; i++)
	{
		x += x;

		for (int j = 1; j < x; j++)
		{
			wynik=wynik + x;
		}
		
	}
	cout << "Wynik potegowania wynosi = " << x << "   " << wynik << endl;
}
#endif // Zadanie3B

#ifdef Zadanie3C
int main()
{
	int wiersze = 7, kolumny = 7;
	char zn1='#', zn2='.';
	srand(time(0));

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = kolumny; j > 0 ; j--)
		{
			cout << zn1 << " ";
		}
		cout << endl; 
	}
}
#endif // Zadanie3C



