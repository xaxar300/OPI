// MiliushZakhar2007
//Windows-1251
// 4d 69 6c 69 75 73 68 5a 61 6b 68 61 72 32 30 30 37 
// UTF-8
// 4D 69 6C 69 75 73 68 5A 61 6B 68 61 72 32 30 30 37
// UTF-16
// 004D 0069 006C 0069 0075 0073 0068 005A 0061 006B 0068 0061 0072 0032 0030 0030 0037


// МилюшЗахарВадимович2007 
// Window-1251
// cc e8 eb fe f8 c7 e0 f5 e0 f0 c2 e0 e4 e8 ec ee e2 e8 f7 32 30 30 37
// UTF-8
// d09c d0b8 d0bb d18e d188 d097 d0b0 d185 d0b0 d180 d092 d0b0 d0b4 d0b8 d0bc d0be d0b2 d0b8 d187 32 30 30 37
// UTF-16
// 041c 0438 043b 044e 0448 0417 0430 0445 0430 0440 0412 0430 0434 0438 043c 043e 0432 0438 0447 0032 0030 0030 0037


// Милюш2007Zakhar
// Window-1251
// cc e8 eb fe f8 32 30 30 37 5a 61 6b 68 61 72
// UTF-8
// d09c d0b8 d0bb d18e d188 32 30 30 37 5a 61 6b 68 61 72
// UTF-16
// 041c 0438 043b 044e 0448 0032 0030 0030 0037 005A 0061 006B 0068 0061 0072


#include <iostream>

int main()
{
   
    int number = 0x12345678;
    char hello[] = "Hello";
    char lfie[] = "MiliushZakhar2007";
    char rfie[] = "МилюшЗахарВадимович2007";
    char lr[] = "Милюш2007Zakhar";

    wchar_t Lfie[] = L"MiliushZakhar2007";
    wchar_t Rfie[] = L"МилюшЗахарВадимович2007";
    wchar_t LR[] = L"Милюш2007Zakhar";
    std::cout << hello << " " << lfie << std::endl;
}