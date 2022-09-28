/*Ambiguity:
	
	Hybrid Inheritance of Multiple and Sinlge
	
	Ex.
	A
	B:A
	C:A
	D:B,C
	
	TO resolve this we need to make base class virtual
	using virtual keyword
	
	Syntax:
		
class B:virtual public A
class B:public virtual A

*/

#include<iostream>
using namespace std;
class A 
{
	public:
		void getA()
		{
			cout<<"A"<<endl;
		}
	
};

class B : virtual public A
{
	public:
		void getB()
		{
			cout<<"B"<<endl;
		}
	
};

class C :  public virtual A
{
	public:
		void getC()
		{
			cout<<"C"<<endl;
		}
	
};

class D : public B,public C
{
	public:
		void getD()
		{
			cout<<"D"<<endl;
		}
	
};


int main()
{
	
	D obj;
	obj.getD();
	obj.getC();
	obj.getA();
	obj.getB();
	
	
	return 0;
}