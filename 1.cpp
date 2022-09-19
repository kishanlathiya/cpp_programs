#include <iostream>
using namespace std;

int fact(int);

int main()
{
    int a[1000], i, n;

	cout << "Enter size of the Array : ";
	cin >> n;
	cout << "Enter elements of the Array : " << endl;

	for(i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
    for(int i = 0 ; i < n ; i++)
    {
        int b = fact(a[i]);
        cout << a[i] << " = "<< b <<" | ";
    }

}

inline int fact(int n)
{

	if (n <= 1)
       	return 1;
   	else
       	return (n * fact(n-1));
}

