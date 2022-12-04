#include <iostream>
#include <locale.h>

using namespace std;
void menu()
{
	cout << "Wybierz operacje: " << endl;
	cout << " 1 - dodawanie," << endl;
	cout << " 2 - odejmowanie," << endl;
	cout << " 3 - mnożenie," << endl;
	cout << " 4 - dzielenie," << endl;
	cout << " 5 - potęgowanie," << endl;
	cout << " 6 - silnia," << endl;
	cout << " 7 - system binarny (dwójkowy)," << endl;
	cout << " 8 - system oktalny (ósemkowy)," << endl;
	cout << " 9 - system heksadecymalny (szesnastkowy)," << endl;
	cout << " 0 - wyjście." << endl;
}

float dodawanie(float a, float b)
{
	return a + b;
}
float odejmowanie(float a, float b)
{
	return a - b;
}
float mnozenie(float a, float b)
{
	return a * b;
}
float dzielenie(float a, float b)
{
	return a / b;
}

float silnia(float a)
{
	long long silnia = 1;

	for (int i = 1; i <= a; i++)
	{
		silnia *= i;
	}

	return silnia;
}

void konwersja(int liczba, int system)
{
	if (liczba == 0)
		return;
	int wynik = liczba % system;
	liczba /= system;
	konwersja(liczba, system);
	if (wynik < 10)
		cout << wynik;
	else
	{
		char litera = wynik + 55;
		cout << litera;
	}
}

int main()
{
	setlocale(LC_ALL, "polish");

	int c;
	menu();
	do
	{
		cout << ">: ";
		cin >> c;
		while (cin.fail())
		{
			cout << "Proszę wprowadzić prawidłowy wybór!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cout << ">: ";
			cin >> c;
		}
		if (c > 0 && c < 10)
		{	
			if (c == 1 || c == 2 || c == 3 || c == 4)
			{
				float a, b;
				cout << "Podaj pierwszą liczbę: ";
				cin >> a;
				while (cin.fail())
				{
					cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
					cin.clear();
					cin.ignore(1000, '\n');

					cout << "Podaj pierwszą liczbę: ";
					cin >> a;
				}
				cout << "Podaj drugą liczbę: ";
				cin >> b;
				while (cin.fail())
				{
					cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
					cin.clear();
					cin.ignore(1000, '\n');

					cout << "Podaj pierwszą liczbę: ";
					cin >> a;
					cout << "Podaj drugą liczbę: ";
					cin >> b;
				}
				if (c == 1)
				{

					cout << "Wynik: " << dodawanie(a, b) << endl << endl;
					menu();
				}
				if (c == 2)
				{
					cout << "Wynik: " << odejmowanie(a, b) << endl << endl;
					menu();
				}
				if (c == 3)
				{
					cout << "Wynik: " << mnozenie(a, b) << endl << endl;
					menu();
				}
				if (c == 4)
				{
					if (b != 0)
					{
						cout << "Wynik: " << dzielenie(a, b) << endl << endl;
						menu();
					}
					else {
						cout << "Błąd! Nie można dzielić przez zero!" << endl << endl;
						menu();
					}
					
				}
			}
			else {
				int a, b;
				if (c == 5)
					{
						cout << "Podaj podstawę (liczba całkowita): ";
						cin >> a;
						while (cin.fail())
						{
							cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
							cin.clear();
							cin.ignore(1000, '\n');

							cout << "Podaj podstawę (liczba całkowita): ";
							cin >> a;
						}
						cout << "Podaj wykładnik (liczba całkowita): ";
						cin >> b;
						while (cin.fail())
						{
							cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
							cin.clear();
							cin.ignore(1000, '\n');

							cout << "Podaj podstawę (liczba całkowita): ";
							cin >> a;
							cout << "Podaj wykładnik (liczba całkowita): ";
							cin >> b;
						}
						cout << "Wynik: " << pow(a, b) << endl << endl;
						menu();
					}
				if (c == 6)
				{
					cout << "Podaj liczbę (liczba całkowita): ";
					cin >> a;
					while (cin.fail())
					{
						cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
						cin.clear();
						cin.ignore(1000, '\n');

						cout << "Podaj liczbę (liczba całkowita): ";
						cin >> a;
					}
					cout << "Wynik: " << silnia(a) << endl << endl;
					menu();
				}
				if (c == 7)
				{
					cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
					cin >> a;
					while (cin.fail())
					{
						cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
						cin.clear();
						cin.ignore(1000, '\n');

						cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
						cin >> a;
					}
					cout << a << " dec = ";
					konwersja(a, 2);
					cout << " bin" << endl << endl;
					menu();
				}
				if (c == 8)
				{
					cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
					cin >> a;
					while (cin.fail())
					{
						cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
						cin.clear();
						cin.ignore(1000, '\n');

						cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
						cin >> a;
					}
					cout << a << " dec = ";
					konwersja(a, 8);
					cout << " oct" << endl << endl;
					menu();
				}
				if (c == 9)
				{
					cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
					cin >> a;
					while (cin.fail())
					{
						cout << "Proszę wprowadzić prawidłową liczbę!" << endl;
						cin.clear();
						cin.ignore(1000, '\n');

						cout << "Podaj liczbę w systemie dziesiętnym (liczba całkowita): ";
						cin >> a;
					}
					cout << a << " dec = ";
					konwersja(a, 16);
					cout << " hex" << endl << endl;
					menu();
				}
			}
		}
		else
		{
			cout << "Podałeś błędną opcję! Wybierz poprawną! " << endl << endl;
			menu();
		}
		
	} while (c != 0);
	return 0;
}