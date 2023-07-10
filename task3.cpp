#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	private:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		char rating_type[100];
		char website[100];
	public:
		void set(char name[100],int id,char type[100],int staff_size,int room_size,int establish_year,char address[100],char rating_type[100],char website[100])
		{
			strcpy(this->name,name);
			this->id=id;
			strcpy(this->type,type);
			this->staff_size,staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			strcpy(this->rating_type,rating_type);
			strcpy(this->website,website);	
		}
		void get()
		{
			cout<<"Enter the Hotel's Name:-"<<name<<endl;
			cout<<"Green vally's id:-"<<id<<endl;
			cout<<"Green vally's type:-"<<type<<endl;
			cout<<"Green vally's staff size:-"<<staff_size<<endl;
			cout<<"Green vally's Room size:-"<<room_size<<endl;
			cout<<"Green vally's Establish year:-"<<establish_year<<endl;
			cout<<"Green vally's Address:-"<<address<<endl;
			cout<<"Green vally's Rating out of 10:-"<<rating_type<<endl;
			cout<<"Green vally's website:-"<<website<<endl;
		}
};
int main()
{
	Hotel h;
	h.set("Green Vally",1234,"5_star",500,600,2003,"Vesu,surat","7/10","www.greenvally.com");
	h.get();
	return 0;
}
