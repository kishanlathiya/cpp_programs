//WAP to get and display 5 Customers information using encapsulation by including below mentioned attributes:
//- cust_id
//- cust_name
//- cust_age
//- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
//- cust_mobile_number
//- cust_city
//- cust_simcard_validity (in years)

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public :
		int id;
		char name[1000];
		int age;
		char brand[100];
		int number;
		char city[1000];
		int simcard_validity;

	void setData(int id, char name[], int age, char brand[], int number, char city[], int simcard_validity)
	{
		this -> id = id;
		strcpy(this -> name, name);
		this -> age = age;
		strcpy(this -> brand, brand);
		this -> number = number;
		strcpy(this -> city, city);
		this -> simcard_validity = simcard_validity;
	}
	
	void getData()
	{
		cout<< "Id : " 					<< this -> id
			<< ", Name : " 				<< this -> name
			<< ", Age : " 				<< this -> age
			<< ", Brand : " 			<< this -> brand
			<< ", Number : " 			<< this -> number
			<< ", City : " 				<< this -> city
			<< ", Simcard_validity : " 	<< this -> simcard_validity << endl;
	}
};

int main()
{
	Student s1, s2, s3, s4, s5;
	
	s1.setData(1, "abc", 20, "jio", 565254,"surat", 2022);
	s2.setData(2, "def", 18, "jio", 122344,"baroda", 2023);
	s3.setData(3, "ghi", 20, "vi", 55677854,"surat", 2015);
	s4.setData(4, "jkl", 14, "vi", 59007784,"rajkot", 2015);
	s5.setData(5, "mno", 15, "Airtel", 7080050,"vapi", 2016);
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
 return 0;
}
