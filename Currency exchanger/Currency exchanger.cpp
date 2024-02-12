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
	double USD[4]{ 1, 3.22, 0.93, 92.5 }; //$, bel rub, euro, rus rub.
	//BYN
	double BYN[4]{ 0.32, 1, 0.28, 27.79 }; //$, bel rub, euro, rus rub.
	//EUR
	double EUR[4]{ 1.09, 3.52, 1, 99.5 }; //$, bel rub, euro, rus rub.
	//RUB
	double RUB[4]{ 0.011, 0.036, 0.01, 1 }; //$, bel rub, euro, rus rub.

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
		string kind_of_currency = "";
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

		//Тип выводимой валюты
		if (new_currency_choice == 1) {
			kind_of_currency = "Долларов США.";
		}
		else if (new_currency_choice == 2) {
			kind_of_currency = "Белорусских рублей.";
		}
		else if (new_currency_choice == 3) {
			kind_of_currency = "Евро.";
		}
		else if (new_currency_choice == 4) {
			kind_of_currency = "Российских рублей.";
		}

		//Ввод количества обмениваемой валюты
		cout << "Введите количество обмениваемой валюты: ";
		double amount_old_value = 0;
		cin >> amount_old_value;

		//Перевод валюты
		double value = 0;
		value = amount_old_value * rate;
		cout << "Результат перевода: " << value << " " << kind_of_currency << endl;

		//Перезапуск программы
		cout << endl << "Хотите продолжить?" << endl;
		cout << "Введите да или нет: ";
		string choice_str = "да";
		cin >> choice_str;
		if (choice_str == "да") {
			choice = true;
		}
		else if (choice_str == "нет") {
			choice = false;
			cout << "Спасибо за использование нашего обменника!" << endl;
		}
		else {
			choice = false;
			cout << "Вы ввели неправильное значение." << endl;
		}
	}

	return 0;
}
