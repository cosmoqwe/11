#include <iostream>
#include <stdio.h>
using namespace std;

char* StringToNumber(int* Arr, int size) 
{
	char* arr2 = new char[50];
	for (int i = 0; i < size; i++)
		if (i == size) 
			arr2[i] = '\0';
		else 
		   arr2[i] = (char)Arr[i];
	return (char*)Arr;
}
void main() {
	setlocale(0, "");
	cout << "Введите числа для преобразования в строку --> " << endl;
	int arr[50], size = 0;
	do {
		cin >> arr[size];
		size++;
	} while (size == 0);
	cout << StringToNumber(arr, size);
}