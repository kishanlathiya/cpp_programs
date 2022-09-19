#include<iostream>
using namespace std;
class RBI
{
	public :
		float rate;
		
		void getROI()
		{
			this->rate = 5.9;
			cout<<"RBI ROT is : "<<this->rate<<endl;
		}
};

class SBI : public RBI
{
	public :		
		void getROI()
		{
			this->rate = 4.7;
			cout<<"SBI ROT is : "<<this->rate<<endl;
		}
};

class BOB : public RBI
{
	public :
	
		void getROI()
		{
			this->rate = 2.9;
			cout<<"BOB ROT is : "<<this->rate<<endl;
		}
};

class ICICI : public RBI
{
	public :
	
		void getROI()
		{
			this->rate = 6.95;
			cout<<"ICICI ROT is : "<<this->rate<<endl;
		}
};

int main()
{
	RBI r1;
	SBI s1;
	BOB b1;
	ICICI i1;
	
	r1.getROI();
	s1.getROI();
	b1.getROI();
	i1.getROI();
	
	
	return 0;
}
