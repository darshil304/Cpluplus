
#include<iostream>
using namespace std;

class Person
{
	private:
	int money;
	
	public:
		
		Person(int m)
		{
			money=m;
			cout<<money<<endl;
			
		}
		
		Person(Person &obj123)
		{
			cout<<obj123.money;
		}		
	
};

int main()
{
	Person x(1000);
	Person y(x);
	
	return 0;
}