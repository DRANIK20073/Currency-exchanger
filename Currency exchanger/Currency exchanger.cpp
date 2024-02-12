#include <iostream>
#include <string>
#include <windows.h> 
#include <cstdio>
using namespace std;

int main()
{
	setlocale(0, " ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Курсы валют
	//USD
	double USD[4]{ 1, 3.22, 0.93, 92.5 };
	const double USD_USD = 1;		 //$
	const double USD_BYN = 3.22;     //bel rub
	const double USD_EUR = 0.93;	 //euro
	const double USD_RUB = 92.5;	 //rus rub
	//BYN
	double BYN[4]{ 0.32, 1, 0.28, 27.79 };
	const double BYN_USD = 0.32;	 //$
	const double BYN_BYN = 1;		 //bel rub
	const double BYN_EUR = 0.28;     //euro
	const double BYN_RUB = 27.79;    //rus rub
	//EUR
	double EUR[4]{ 1.09, 3.52, 1, 99.5 };
	const double EUR_USD = 1.09;	 //$
	const double EUR_BYN = 3.52;	 //bel rub
	const double EUR_EUR = 1;		 //euro
	const double EUR_RUB = 99.5;	 //rus rub
	//RUB
	double RUB[4]{ 0.011, 0.036, 0.01, 1 };
	const double RUB_USD = 0.011;	 //$
	const double RUB_BYN = 0.036;	 //bel rub
	const double RUB_EUR = 0.01;	 //euro
	const double RUB_RUB = 1;		 //rus rub

	bool choice = true;
	while (choice == true) {

		//Выбор валюты которую надо перевести
		cout << "Выберите валюту которую нужно перевести:" << endl;
		cout << "1.USD" << endl << "2.BYN" << endl << "3.EUR" << endl << "4.RUB" << endl;
		int old_currency_choice = 0;
		cin >> old_currency_choice;

		//Выбор валюты для перевода
		cout << "Выберите в какую валюту нужно перевести:" << endl;
		cout << "1.USD" << endl << "2.BYN" << endl << "3.EUR" << endl << "4.RUB" << endl;
		int new_currency_choice = 0;
		cin >> new_currency_choice;

		//Нахождение нужного курса
		double rate = 0;
		for (int i = 0; i < old_currency_choice; i++) {
			//USD
			if (old_currency_choice == 1) {
				rate = USD[new_currency_choice - 1];
			}
			//BYN
			if (old_currency_choice == 2) {
				rate = BYN[new_currency_choice - 1];
			}
			//EUR
			if (old_currency_choice == 3) {
				rate = EUR[new_currency_choice - 1];
			}
			//RUB
			if (old_currency_choice == 4) {
				rate = RUB[new_currency_choice - 1];
			}
		}

		//Ввод количества обмениваемой валюты
		cout << "Введите количество обмениваемой валюты: ";
		double amount_old_value = 0;
		cin >> amount_old_value;

		//Перевод валюты
		double value = 0;
		value = amount_old_value * rate;
		cout << "Результат перевода: " << value << endl;

		//Перезапуск
		cout << endl << "Хотите продолжить?" << endl;
		cin >> choice;
		if (choice == false) {
			cout << "Спасибо за использование нашего обменника!" << endl;
		}
	}

	return 0;
}
