#include<iostream>
using namespace std;
int num=34;
class Person
{
	private:	
	
	void test()
	{	
		cout<<"fun"<<endl;
	}	
	
	public:
	void test123()
	{
		cout<<"fun123"<<endl;
	}
	int x;
	void Scope(int a)
	{
		
		x=a;
		cout<<x<<endl;
	}
	
	void getA(int xyz)
	{
		xyz=23;
		cout<<xyz<<"num = "<<num<<endl;
	}
	
//	void getB(int abc)
//	{
//		xyz=abc;
//		cout<<xyz<<endl;
//	}
		
};

int main()
{
	Person p;
//	p.test();
	p.Person::test123();
	p.Scope(-90);
	p.getA(123);
	
	cout<<num<<endl;
	

	return 0;
}