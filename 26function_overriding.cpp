#include<iostream>
using namespace std;

class A
{
	public:
		void test()
		{
			cout<<"Class A"<<endl;
		}
		
	
};

class B : public A
{
	public:
		
		void test()
		{
			cout<<"Class B"<<endl;
		}
	
};


int main()
{
	B obj;
	obj.test();
	obj.A::test();
	return 0;
}