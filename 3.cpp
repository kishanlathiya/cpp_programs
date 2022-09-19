#include<iostream>
using namespace std;

int main()
{
	int i;
	int a[10000], j = 0;
		
	for(i = 2020 ; i <= 3030 ; i++)
	{
		if(i % 4 == 0)
		{
			a[j] = i;		
			cout << a[j] << endl;	
			j++;
		}
	}	
	
	return 0;
}

