#include <iostream>
#include <stdio.h>
using namespace std;
char* Uppercase(char* str)
{
	for ( int i = 0; i < strlen(str); i++) 
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return str;
}
void main()
{
	setlocale(0, "");
	char str[100];
	cout << "������� ������ --> " << endl;
	gets_s(str);
	cout << "������� ������� --> " << endl;
	cout << Uppercase(str);
}