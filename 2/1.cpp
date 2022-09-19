#include <iostream>
using namespace std;

class Shape 
{  	
	public :
		float radius;
		float base;
		float height;     	
      	float area;
      	float length;
      	float width;
      	
      	virtual void calculate() = 0;     	
};
 
class Circle : public Shape 
{
   	public :
      	void calculate() 
		{ 
     		cout << "Enter Radius : ";   
			cin >> radius;
			area = 3.14 * radius * radius;
			cout << "Area of Circle is : " << area;
      	}
};

class Triangle : public Shape 
{
   	public :
      	void calculate() 
		{ 
        	cout << endl << endl << "Enter Base : ";   
			cin >> base;
			cout << "Enter Height : ";   
			cin >> height;
			area = (base * height) / 2;
			cout << "Area of Triangle is : " << area;
      	}
};

class Rectangle : public Shape 
{
   	public :
      	void calculate() 
		{ 
        	cout << endl << endl << "Enter Length : ";   
			cin >> length;
			cout << "Enter Width : ";   
			cin >> width;
			area = length * width;
			cout << "Area of Rectangle is : " << area;
      	}
};
 
int main()
{
   	Circle c;
   	Triangle t;
   	Rectangle r;

    c.calculate();
	t.calculate(); 
	r.calculate();

  return 0;
}

