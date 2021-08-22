#include <iostream>
#include <stdio.h>
using namespace std;

int StringToNumber(const char* str) 
{
	int* arr = new int[strlen(str)];
	for (int i = 0; i < strlen(str); i++)
	{
		(arr[i] = (int)str[i]);
		cout << arr[i] << " ";
	}
	cout << endl;
	return (int)*arr;
	
}
void main() 
{
	setlocale(0, "");
	cout << "¬ведите текст" << endl;
	char str[50];
	gets_s(str);
	cout << StringToNumber(str);
}
