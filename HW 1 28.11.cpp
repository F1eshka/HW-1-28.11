#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int length;
	length = 50;
	char symbol = ' ';
	int spaces = 0;
	int wordcount = 0;
	int nospaces = 0;
	int sr = 0;
	char* name = new char[length] {};
	cout << name << "\n";
	cout << "Введите текст: ";
	gets_s(name, length);
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i] << "";
		if (name[i] == symbol)
		{
			spaces++;
		}
	}
	cout << "\n";
	cout << "Пробелов: " << spaces << "\n";
	wordcount = spaces + 1;
	cout << "Количество слов: " << wordcount << "\n";
	nospaces = strlen(name) - spaces;
	cout << "Не пробельные символы: " << nospaces << "\n";
	sr = nospaces / wordcount;
	cout << "Средняя длина: " << sr << "\n";

	delete[] name;
}