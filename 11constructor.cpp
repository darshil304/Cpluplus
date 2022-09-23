
/*
Constructor: magic function which is called automatoically
			when an object of a class is created
			
Note:
	
	1. its name must be same as class name
	2. it doesnt have return/datatype
			
Types:
	
	1. default/simple constructor
	
	Syntax: 
	
			class-name()
			{
				
			}
	2. paramerterized constructor
	
	*/


#include<iostream>
using namespace std;

class A
{
	public:
		
		A() // default / simple constructor
		{
			cout<<"this is constructor...!";
			
			int a=6,b=7;
			cout<<"sum = "<<a+b;
		}
	
};

int main()
{
	 A obj;
	return 0;
}