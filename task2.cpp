#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	public:
	int hh;
	int mm;
	int ss;
};

 main()
{
	Time t;
	cout<<"Enter the Time in seconds:-";
	cin>>t.ss;
	
	t.hh=t.ss/3600;
	t.mm=(t.ss%3600)/60;
	t.ss=(t.ss%3600)%60;
	
	cout<<"Time in HH:MM:SS formate:-"<<t.hh<":"<<t.mm<<":"<<t.ss;

}
