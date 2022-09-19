#include<iostream>
using namespace std;

class Cricket
{
	public :
		getTotalOvers()
		{
			cout << "Welcome to cricket";
		}
	
};

class T20Match : public Cricket
{
	public:
		getTotalOvers()
		{
			Cricket :: getTotalOvers();
			cout << endl << "This is T20 Match" << endl;
		}	
};

class TestMatch : public Cricket
{
	public:
		getTotalOvers()
		{
			cout << "This is Test Match" << endl;
		}		
};

int main ()
{
	T20Match t1;
	TestMatch t2;
	
	t1.getTotalOvers();
	t2.getTotalOvers();
  return 0;
}
