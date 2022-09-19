//WAP to get and display 5 Students information using encapsulation by including below mentioned attributes:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_email
//- stu_city
//- stu_college

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private :
		int id;
		char name[1000];
		int age;
		char course[1000];
		char email[1000];
		char city[1000];
		char college[1000];
		
	public :
		void setData(int id , char name[] , int age , char course[] , char email[] , char city[] , char college[])
		{
			this -> id = id;
			strcpy(this -> name, name);
			this -> age = age;
			strcpy(this -> course, course);
			strcpy(this -> email, email);
			strcpy(this -> city, city);
			strcpy(this -> college, college);			
		}
		
		void getData()
		{
			cout << "ID : " << this -> id
				<< ", Name : " << this -> name
				<< ", Age : " << this -> age
				<< ", Course : " << this -> course
				<< ", Email : " << this -> email
				<< ", City : " << this -> city
				<< ", College : " << this -> college << endl;			
		}	
		
};

int main()
{
	Student s1, s2, s3, s4, s5;
	
	s1.setData(1 , "a" , 14 , "c/c++" , "abc" , "xyz" , "sjfdg gh tfgh");
	s2.setData(2 , "b" , 10 , "Flutter" , "wre" , "dfd" , "dfugjysd");
	s3.setData(3 , "c" , 15 , "c, dfr" , "zfft" , "dkfg"  , "hbdfds");
	s4.setData(4 , "d" , 18 , "Flutter" , "dffg" , "wdc" , "jnhdfds");
	s5.setData(5 , "e" , 20 , "c/c++" , "jklk" , "ffft" , "hvjsdf");
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
}
