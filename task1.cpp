#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public:
		int feet;
		int inch;
}d1,d2,sum;

int main()
{
	cout<<"Enter the value of First feet:-";
	cin>>d1.feet;
	cout<<"Enter the value of second feet:-";
	cin>>d2.feet;
	sum.feet=d1.feet+d2.feet;
	
	cout<<"Enter the value of First Inch:-";
	cin>>d1.inch;
	cout<<"Enter the value of second Inch:-";
	cin>>d2.inch;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch=sum.inch-12;
	}
	
	cout<<"The sum of Feet:-"<<sum.feet<<endl;
	cout<<"The sum of Inch:-"<<sum.inch<<endl;
	
	return 0;
}
