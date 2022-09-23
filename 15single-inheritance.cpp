#include<iostream>
using namespace std;
class A
{
	public:
	void getA()
		{		
			cout<<"Classs A"<<endl;
		}
	
};

class B : public A
{
	public:
		
		void getB()
		{
			cout<<"Class B"<<endl;
		}
	
};


int main()
{
	B obj;
	obj.getB();
	obj.getA();
	return 0;
}