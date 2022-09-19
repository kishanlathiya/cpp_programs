#include<iostream>
using namespace std;

class Admin
{
	public :
		char company_name[100];
   		int manager_salary;
   		int employee_salary;
  		int total_staff;
  		int total_annual_revenue;
    	char can_terminate[100];
    
		void setData()
		{
		    cout << "Enter company name : ";            cin >> company_name;
			cout << "Enter total annual revenue : " ;   cin >> total_annual_revenue;
			cout << "Enter terminate : ";               cin >> can_terminate;
		}	
	    void myAccess()
	    {
	    	cout << endl << "Company name : "            << company_name << endl
					     << "Total annual revenue : "    << total_annual_revenue << endl
					     << "Terminate : "               << can_terminate << endl;
		}
};

class Manager : public Admin
{
	public :
		void setData()
		{
		    cout << "Enter manager salary : ";    		cin >> manager_salary;
			cout << "Enter total staff : ";       		cin >> total_staff;
		}
		void myAccess()
		{
			cout << endl	<< "Manager salary : "     << manager_salary << endl
			     			<< "Total staff : "        << total_staff << endl;
			
		}
};

class Employee : public Manager
{
	public :	
		void setData()
		{
			cout << "Enter employee salary : ";    		cin >> employee_salary;
			cout << "Enter total staff : ";       		cin >> total_staff;
		}
		void myAccess()
		{
			cout << endl << "Employee salary : " << employee_salary << endl
			     		 << "Total staff : " << total_staff << endl;
		}
};

int main()
{
    Admin a;
    Manager m;
    Employee e;
      
    cout << endl << "<========== Admin details ==========>" << endl;
	a.setData();
	a.myAccess();
	  
	cout << endl << endl << "<========== Manager details ==========>" << endl;
	m.setData();
	m.myAccess();
	  
	cout << endl << endl << "<========== Employee details ==========>" << endl;
	e.setData();
	e.myAccess();
	  
  return 0;
}
