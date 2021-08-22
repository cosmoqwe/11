#include <iostream>
#include <stdio.h>
using namespace std;
char* Lowercase(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
	}
	return str;
}
void main()
{
	setlocale(0, "");
	char str[100];
	cout << "Введите строку --> " << endl;
	gets_s(str);
	cout << "Нижний  регистр --> " << endl;
	cout << Lowercase(str);
}