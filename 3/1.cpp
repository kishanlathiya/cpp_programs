#include<iostream>
using namespace std;

class Class2;

class Class1
{
	private :
		int s;
		int m;
		int h;
		
		void setdata()
			{
				cout <<"Enter second :";
				cin >>s;
				cout <<"Enter minute :";
				cin >>m;
				cout <<"Enter hours :";
				cin >>h;
			}
		
		friend void kishan(Class1, Class2);
};

class Class2
{
	private :
		int s;
		int m;
		int h;
		
		void setdata()
			{
				cout <<"Enter second :";
				cin >>s;
				cout <<"Enter minute :";
				cin >>m;
				cout <<"Enter hours :";
				cin >>h;
			}
		
		friend void kishan(Class1, Class2);
};

void kishan(Class1 t1 , Class2 t2)
{
	int Ts, Tm, Th;
		
	t1.setdata();
    t2.setdata();
	
	Ts = t1.s + t2.s;
	Tm = t1.m + t2.m + (Ts / 60);	
	Th = t1.h + t2.h + (Tm / 60);
	Tm = Tm % 60;
	Ts = Ts % 60;

	cout << Th << " : ";
	cout << Tm << " : ";
	cout << Ts;
}

int main()
{
	Class1 t1;
	Class2 t2;
	
	kishan(t1, t2);
	
	return 0;
}

