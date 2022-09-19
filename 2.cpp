#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i;
			
	cout << "Enter the string : ";
	gets(a);
	
	for(i = 0 ; a[i] ; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
			a[i] += 32;
			
		else if(a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
	}
	
	cout << "String in toggle case : " << a;
	
	return 0;
}

