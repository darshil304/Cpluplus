#include<iostream>
using namespace std;

class Person
{
	public:		
		int age;		
		void getAge(int a)
		{		
			age=a;
			cout<<age<<endl;			
		}
};

int main()
{
	Person p;
	p.getAge(23);
	
	return 0;
}