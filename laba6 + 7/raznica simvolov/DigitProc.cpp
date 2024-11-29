#include <iostream>
#include <string>
using namespace std;

bool isDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

void getDigits()
{
    string input;
    cout << "Введите последовательность цифр: ";
    cin >> input;

    for (char ch : input)
    {
        if (isDigit(ch))
        {
            cout << "Цифра: " << ch << ", код символа: " << static_cast<int>(ch) << endl;
        }
        else
        {
            cout << "Ошибка: символ \"" << ch << "\" не является цифрой." << endl;
        }
    }
}
