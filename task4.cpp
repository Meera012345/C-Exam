#include<iostream>
#include<string.h>
using namespace std;

class Method
{
	public:
	int x;
	void truck()
	{
		cout<<"Truck is Running.."<<endl;
	}
	void truck(int n)
	{
		cout<<"Truck is running in "<<n<<" km/hr."<<endl;
	}
	void truck(int a,int b)
	{
		cout<<"Truck loaded "<<a<<" kg Weight."<<endl;
		cout<<"Truck's depth is "<<b<<" meter."<<endl;
	}
	void truck(int p,int q,int r)
	{
		cout<<"Truck height is "<<p<<" Meter."<<endl;
		cout<<"Truck weight is "<<q<<" kg."<<endl;
		cout<<"Truck loading capasity is "<<r<<" ton."<<endl;
	}
};
int main()
{
	Method m;
	m.truck();
	m.truck(75);
	m.truck(300,350);
	m.truck(400,75,2);
	return 0;
	
}
