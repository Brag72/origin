#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int function(string str, int forbidden_length)
{
    if (str.length() != forbidden_length)
    {
        return str.length();
    }
    throw "Вы ввели слово запретной длины! До свидания";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    cout << "Введите запретную длину: " << endl;
    int f_length;
    cin >> f_length;

    cout << "Введите слово: " << endl;
    string word;
    cin >> word;

    try
    {
       cout << "Длина слова " << "\"" << word << "\"" << " равна: " << function(word, f_length);
    }

    catch (const char* bad_length)
    {
        cout << bad_length << endl;
    }
}