#include <iostream>
#include <stdio.h>
using namespace std;
char* mystrrev(const char* str)
{
	char* arr = new char[strlen(str) + 1]{};
	int temp = strlen(str);
	for (int i = 0; str[i] != '\0'; i++)
		arr[i] = str[temp - 1 - i];
	arr[temp] = '\0';
	return arr;
}
void main()
{
	setlocale(0, "");
	char str[100];
	cout << "¬ведите строку --> " << endl;
	gets_s(str);
	cout << mystrrev(str);

}
