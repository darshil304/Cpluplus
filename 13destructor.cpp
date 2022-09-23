
/*
Destructor: to release memory occupied by constructor
Syntax 

~classname()
{
	
}*/
#include<iostream>
using namespace std;

class Person
{
	private:
	int money=123;
	
	public:
		
		~Person()  // destructor
		{
			
			cout<<money<<endl;
			
		}
			
	
};

int main()
{
	Person x;

	
	return 0;
}