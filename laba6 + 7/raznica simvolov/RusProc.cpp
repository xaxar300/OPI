#include <iostream>
#include <string>
#define KOD_A 192
#define KOD_a 224
#define CHECKING 31
#define AREA_FROM 192
#define AREA_TO 255
using namespace std;

int getWindows1251Difference(unsigned char ch)
{
    unsigned char upperA = KOD_A; // ��� ��������� � � Windows-1251
    unsigned char lowerA = KOD_a; // ��� �������� � � Windows-1251

    if (ch >= upperA && ch <= upperA + CHECKING)
    { // �������� �� ��������� ������� �����
        return lowerA - upperA;
    }
    if (ch >= lowerA && ch <= lowerA + CHECKING)
    { // �������� �� �������� ������� �����
        return lowerA - upperA;
    }
    return 0;
}

bool isRussianLetter(unsigned char ch)
{
    return (ch >= AREA_FROM && ch <= AREA_TO);
}

void getRussian()
{
    string input;
    cout << "������� ������������������ ������� ����: ";
    cin >> input;

    for (unsigned char ch : input)
    {
        if (isRussianLetter(ch))
        {
            int difference = getWindows1251Difference(ch);
            cout << "�����: " << ch << ", ������� ����� � Windows-1251: " << difference << endl;
        }
        else
        {
            cout << "������: ������ \"" << ch << "\" �� �������� ������� ������." << endl;
        }
    }
}
