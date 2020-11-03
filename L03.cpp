
#include <iostream>
using namespace std;

#define Zadanie3A

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



