#include<iostream>
using namespace std;

class op_overload
{
	public:
		int value;
	
		void setV(int v)
		{
			value=v;
		}
		
		
		op_overload operator + (op_overload x)
		{
			x.value = value + x.value; 
		}
		
		
		void getV()
		{
			cout<<value<<endl;
		}
	
};

int main()
{
	op_overload ob1,ob2,ob3;
	ob1.setV(10);
	ob2.setV(20);
	
	ob3 = ob1 + ob2;
	
	ob3.getV();
	return 0;
}