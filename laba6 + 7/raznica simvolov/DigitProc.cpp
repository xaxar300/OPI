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
    cout << "������� ������������������ ����: ";
    cin >> input;

    for (char ch : input)
    {
        if (isDigit(ch))
        {
            cout << "�����: " << ch << ", ��� �������: " << static_cast<int>(ch) << endl;
        }
        else
        {
            cout << "������: ������ \"" << ch << "\" �� �������� ������." << endl;
        }
    }
}
