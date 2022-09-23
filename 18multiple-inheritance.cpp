#include<iostream>
using namespace std;

class A
{
	protected:
		
		int varA =123;
	public:
		void displayA()
		{
			cout<<varA<<endl;
		}
};

class B
{
	protected:
		
		int varB =987;
		
	public:
		void displayB()
		{
			cout<<varB<<endl;
		}
	
};


class C : public A ,public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
	
};
int main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
;	return 0;
}