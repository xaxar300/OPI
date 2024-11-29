#include <iostream>
#include <string>
#define RAZNICA 32
using namespace std;

int getAsciiDifference(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return (ch + RAZNICA) - ch; // ��������� � ��������, ��������� 32
    }
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - (ch - RAZNICA); // �������� � ���������, �������� 32
    }
    return 0;
}

bool isLatinLetter(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

void getLatin()
{
    string input;
    cout << "������� ������������������ ��������� ����: ";
    cin >> input;

    for (char ch : input)
    {
        if (isLatinLetter(ch))
        {
            int difference = getAsciiDifference(ch);
            cout << "�����: " << ch << ", ������� ����� ASCII: " << difference << endl;
        }
        else
        {
            cout << "������: ������ \"" << ch << "\" �� �������� ��������� ������." << endl;
        }
    }
}
