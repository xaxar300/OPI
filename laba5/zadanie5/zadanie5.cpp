#include <iostream>
#include <string>

using namespace std;

// Функция для вычисления разницы кодов ASCII между прописной и строчной латинской буквой
int getAsciiDifference(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return (ch + 32) - ch; // Прописная к строчной, добавляем 32
    }
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - (ch - 32); // Строчная к прописной, вычитаем 32
    }
    return 0;
}

// Функция для вычисления разницы кодов Windows-1251 для русских букв
int getWindows1251Difference(unsigned char ch)
{
    unsigned char upperA = 192; // Код прописной А в Windows-1251
    unsigned char lowerA = 224; // Код строчной а в Windows-1251

    if (ch >= upperA && ch <= upperA + 31)
    { // Проверка на прописную русскую букву
        return lowerA - upperA;
    }
    if (ch >= lowerA && ch <= lowerA + 31)
    { // Проверка на строчную русскую букву
        return lowerA - upperA;
    }
    return 0;
}

void processOption1()
{
    string input;
    cout << "Введите последовательность латинских букв: ";
    cin >> input;

    for (char ch : input)
    {
        // Проверяем, является ли введённый символ латинской буквой
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            int difference = getAsciiDifference(ch);
            cout << "Буква: " << ch << ", разница кодов ASCII: " << difference << endl;
        }
        else
        {
            cout << "Ошибка: символ \"" << ch << "\" не является латинской буквой." << endl;
        }
    }
}

void processOption2()
{
    string input;
    cout << "Введите последовательность русских букв: ";
    cin >> input;

    for (unsigned char ch : input)
    {
        // Проверяем, является ли введённый символ русской буквой в Windows-1251
        if (ch >= 192 && ch <= 255)
        { // Диапазон русских букв в Windows-1251
            int difference = getWindows1251Difference(ch);
            cout << "Буква: " << ch << ", разница кодов в Windows-1251: " << difference << endl;
        }
        else
        {
            cout << "Ошибка: символ \"" << ch << "\" не является русской буквой." << endl;
        }
    }
}

void processOption3()
{
    string input;
    cout << "Введите последовательность цифр: ";
    cin >> input;

    for (char ch : input)
    {
        // Проверяем, является ли введённый символ цифрой
        if (ch >= '0' && ch <= '9')
        {
            cout << "Цифра: " << ch << ", код символа: " << static_cast<int>(ch) << endl;
        }
        else
        {
            cout << "Ошибка: символ \"" << ch << "\" не является цифрой." << endl;
        }
    }
}

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

        switch (choice)
        {
        case 1:
            processOption1();
            break;
        case 2:
            processOption2();
            break;
        case 3:
            processOption3();
            break;
        case 4:
            cout << "Выход из программы." << endl;
            return 0;
        default:
            cout << "Ошибка: выберите вариант от 1 до 4." << endl;
        }
    }
}
