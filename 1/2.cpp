#include<iostream>
using namespace std;

class P
{
	public :
		float temperature;
		
	void getData()
		{
			cout << "Enter temperature in Celcius : ";
			cin >> temperature;
		}
};

class Q : public P
{
	public :
		float fahrenheit;
		
	 toFahrenheit()
	{
		fahrenheit = (temperature * 1.8) + 32;
		cout << "Fahrenheit is : " << fahrenheit;
	}			
};

class R : public Q
{
	public :
		float kelvin;
		
	 toKelvin()
	{
		kelvin = temperature + 273.15;
		cout << endl << "Kelvin is : " << kelvin;
	}
};

int main()
{
	R o;

	o.getData();
	o.toFahrenheit();
	o.toKelvin();
	
	return 0;
}
