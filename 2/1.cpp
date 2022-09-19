#include<iostream>
using namespace std;

class Big
{
	public :
		int x;
				
		void setData(int x)
		{
			this->x = x;
		}
		
		void getData()
		{
			cout << "Bigger value is : " << this->x;
		}
		
		Big operator<(Big n)
		{
			Big temp;
			if(this->x > n.x)
			{
				temp.x = this->x;
			}
			else
			{
				temp.x = n.x;
			}
			return temp;
		}		
};

int main()
{
	Big h1, h2, h3;
	
	h1.setData(5);
	h2.setData(5);
	
	h3 = h2 < h1;		      // h3 = h2.operator<(h1)
	h3.getData();
  return 0;
}
