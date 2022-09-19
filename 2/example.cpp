#include <iostream>
using namespace std;

class Complex
{
	public :
		int x, y;
		
		void setData(int x, int y)
		{
			this -> x = x;
			this -> y = y;
		}
		
		void getData()
		{
			cout << this->x << " + " << this->y << "j" << endl;
		}
		
		Complex operator+(Complex n)
		{
			Complex temp;
			temp.x = this->x + n.x;
			temp.y = this->y + n.y;
			return temp;
		}
};

int main()
{
	Complex c1, c2, c3;
	
	c1.setData(3, 5);
	c2.setData(4, 8);
	
	c1.getData();
	c2.getData();
	
	c3 = c1 + c2;	//c3 = c1.operator+(c2);
	
	cout << "*******" << endl;
	c3.getData();
  return 0;
}
