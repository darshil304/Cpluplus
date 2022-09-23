#include<iostream>
using namespace std;

class A
{
	
	public:
		
	int a=12;
	
	void test()
	{
		cout<<"this is function...!"<<endl;
	}	
};

int main()
{
	
	A obj;
	obj.test();
	cout<<obj.a;
	return 0;
}