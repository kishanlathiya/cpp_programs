#include<iostream>
using namespace std;

int main()
{
	int i, n;
			
	cout << "Enter number of elements of an Array : ";
	cin >> n;
	
	int a[n];
	
	cout << endl << "Enter " << n << " elements of an Array" << endl;
	for(i = 0 ; i < n ; i++)
	{
		cout << "Element ";
		cin >> a[i];
	}

	cout << endl << "Even elements of this Array are : " << endl;
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] % 2 == 0)
		cout << a[i] << endl;
	}
	return 0;
}

