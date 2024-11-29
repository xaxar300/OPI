#include <iostream>
#include "LatinProc.h"
#include "RusProc.h"
#include "DigitProc.h"
#include "main.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef _WIN32
	system("chcp 1251 > nul");
#endif
	int choice;
	while (true)
	{
		cout << "Выберите действие:\n";
		cout << "1 - Разница кодов ASCII для латинских букв\n";
		cout << "2 - Разница кодов в Windows-1251 для русских букв\n";
		cout << "3 - Код символа для цифр\n";
		cout << "4 - Выход\n";
		cout << "Введите номер действия: ";
		cin >> choice;
		if(choice)
		{
		switch (choice)
		{
		case 1:
			getLatin();
			break;
		case 2:
			getRussian();
			break;
		case 3:
			getDigits();
			break;
		case 4:
			cout << "Выход из программы." << endl;
			return 0;
		default:
			cout << "Ошибка: выберите вариант от 1 до 4." << endl;
		}
		}
		else 
		{
			break;
		}
	}
}