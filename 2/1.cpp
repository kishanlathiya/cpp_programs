#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	private :
		int id;
		char name[100];
		char location[100];
		int staff_size;
		int s_qty;
		int r_qty;
		int establish_year;	
		int rating;
	public :
		   static char type[100];
		
	public:
		void setData()
		{
			cout<<endl<<"enter hotel id :";
			cin>>this->id;
			cout<<"enter hotel name :";
			cin>>this->name;
			cout<<"enter hotel location :";
			cin>>this->location;
			cout<<"enter hotel staff_size :";
			cin>>this->staff_size;
			cout<<"enter staff qty:";
			cin>>this->s_qty;
			cout<<"enter room qty :";
			cin>>this->r_qty;
			cout<<"enter hotel establish_year :";
			cin>>this->establish_year;
			cout<<"enter hotel rating_type :";
			cin>>this->rating;
		}
		void getData()
		{
			cout<<"id : "<<this->id
			<<" | name : "<<this->name
			<<" | hotel type : "<<this->type
			<<" | staff_size : "<<this->staff_size
			<<" | staff_qty : "<<this->s_qty
			<<" | room_qty : "<<this->r_qty
			<<" | establish_year : "<<this->establish_year
			<<" | location : "<<this->location
			<<" | rating_type : "<<this->rating<<endl;
		}
};
char Hotel :: type[100]="Hotel";

int main()
{
	Hotel h[100];
	int i,n;
	cout<<"Type is : ";

	cout <<Hotel :: type<<endl;
	
	cout<<"how many hotel details you want to enter :";
	cin>>n;
	cout<<" Enter the hotel information : ";
	cout<<i+1<<endl;
	
	for(i=0;i<n;i++)
	{
		h[i].setData();
	}
	cout<<endl<<"	The hotel information is..."<<endl;
    for(int i=0; i<n;i++)
    {
         h[i].getData();
    }
	return 0;
}
