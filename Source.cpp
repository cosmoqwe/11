#include <iostream>
using namespace std;
int mystrcmp(const char* str,  const char* str2)
{
	
		if (strlen(str) == strlen(str2))
		{
			return 0;
		} 
		else if (strlen(str) > strlen(str2))
		{
			return 1;
		} 
		else
		{
			return -1;
		}
	
}
void main()
{
	setlocale(0, "");
    char str[100];
    char str2[100];
	cout << "¬ведите строку 1 --> " << endl;
     gets_s(str);
    cout << "¬ведите строку 2 --> " << endl;
	 gets_s(str2);
	cout << mystrcmp(str, str2);
}