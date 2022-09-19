#include<iostream>
using namespace std;

class Cafe
{
	private :
		int cafe_id;
		char cafe_name[100];
		char cafe_type[100];
		int cafe_rating;
		char cafe_location[100];
		int cafe_establish_year;
		int cafe_staff_quantity;
		
	public :		
		Cafe()
		{			
			cout << endl << "Enter cafe ID : ";
			cin >> this -> cafe_id;		
			cout << "Enter cafe Name : ";
			cin >> this -> cafe_name;
			cout << "Enter cafe Type : ";
			cin >> this -> cafe_type;
			cout << "Enter cafe Rating : ";
			cin >> this -> cafe_rating;
			cout << "Enter cafe Location : ";
			cin >> this -> cafe_location;
			cout << "Enter cafe Establish Year : ";
			cin >> this -> cafe_establish_year;
			cout << "Enter cafe Staff Quantity : ";
			cin >> this -> cafe_staff_quantity;	
			
		}	
				
		void getData()
		{
			cout << endl << endl << "Cafe ID is : " << this -> cafe_id;
			cout << endl << "Cafe Name is : " << this -> cafe_name;
			cout << endl << "Cafe Type is : " << this -> cafe_type;
			cout << endl << "Cafe Rating is : " << this -> cafe_rating;
			cout << endl << "Cafe Location is : " << this -> cafe_location;
			cout << endl << "Cafe Establish Year is : " << this -> cafe_establish_year;
			cout << endl << "Cafe Staff Quantity is : " << this -> cafe_staff_quantity;				
		}
									
};

int main()
{
	int i,n;
	
	cout << "Enter number of Cafe you want to enter : ";
	cin >> n;
	
	Cafe a[n];
	
	for(i = 0 ; i < n ; i++)
	{
		a[i].getData();
	}

  return 0;
}
