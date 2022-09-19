#include<iostream>
using namespace std;

class A
{
	public :
		void calculate()
		{
			cout << endl << "Arithmetic operations : ";
		}
};

class B : public A
{
	public :
		void calculate(int a, int b)
		{
			A::calculate();
			cout << endl << "Division : " << a/b;
		}
		void calculate(int a, int b, int c)
		{
			cout << endl << "Subtraction : " << a-b-c;
		}
		void calculate(int a, int b, int c, int d)
		{
			cout << endl << "Multiplication : " << a*b*c*d;
		}
		void calculate(int a, int b, int c, int d,int e)
		{
			cout << endl << "Addition : " << a+b+c+d+e;
		}
};

int main()
{
	B o;
	
	o.calculate(15, 5);
	o.calculate(20, 10, 5);
	o.calculate(15, 5, 2, 3);
	o.calculate(15, 5, 8, 9, 7);
  return 0;	
};
