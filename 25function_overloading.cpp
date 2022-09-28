#include<iostream>
using namespace std;

class test_fun_overloading
{
	public:
		
		void test()
		{
			cout<<"Fun1"<<endl;
		}
		void test(int x)
		{
			cout<<"INT"<<endl;
		}
		void test(string y)// int x int y : 56.6
		{
			cout<<"STRING fun"<<endl;
		}
		void test(int x,string y)// double a float b // 56
		{
			cout<<"STRING X fun"<<endl;
		}
	
};

int main()
{
	test_fun_overloading obj;
	obj.test();
	obj.test(123);
	obj.test("name");
	obj.test(234,"swedfse");
}