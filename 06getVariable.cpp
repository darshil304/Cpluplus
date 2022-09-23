#include<iostream>
using namespace std;

class Person
{
	public:		
		int age;
};

int main()
{
	Person p;
	
	cout<<"Enter age:\n";
	
	cin>>p.age;
	cout<<"age = "<<p.age;
	return 0;
}