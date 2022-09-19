#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public :
		int id;
		char name[1000];
		char role[1000];
		int age;
		int salary;
		int experience;
		char city[1000];
		char company_name[1000];
};

int main()
{
	Employee e[100];
	int i;
	
	for(i = 0 ; i < 5 ; i++)
	{
		cout << "Employee no. : ";
		cout << i+1;
		
		cout << "Enter ID : ";
		cin >> e[i].id;
		
		cout << "Enter Name : ";
		cin >> e[i].name;
		
		cout << "Enter Role : ";
		cin >> e[i].role;
		
		cout << "Enter Age : ";
		cin >> e[i].age;
		
		cout << "Enter Salary : ";
		cin >> e[i].salary;
		
		cout << "Enter Experience : ";
		cin >> e[i].experience;
		
		cout << "Enter City : ";
		cin >> e[i].city;
		
		cout << "Enter Compane Name : ";
		cin >> e[i].company_name;
			
	}
	for(i = 0 ; i < 5 ; i++)
	{
		cout << endl << "Employee no... ";
		cout << i+1 << endl;
		
		cout << "ID : ";
		cout << e[i].id<<  endl;
		
		cout << "Name : ";
		cout <<  e[i].name<<  endl;
		
		cout << "Role : ";
		cout <<  e[i].role<<  endl;
		
		cout << "Age : ";
		cout <<  e[i].age<<  endl;
		
		cout << "Salary : ";
		cout <<  e[i].salary<<  endl;
		
		cout << "Experience : ";
		cout <<  e[i].experience<<  endl;
		
		cout << "City : ";
		cout <<  e[i].city<<  endl;
		
		cout << "Compane Name : ";
		cout <<  e[i].company_name<<  endl;
			
	}	
	return 0;
}
