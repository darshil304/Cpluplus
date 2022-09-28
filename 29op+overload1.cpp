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
			return x;
		}
		
		
		void getV()
		{
			cout<<value<<endl;
		}
	
};

int main()
{
	op_overload ob1,ob2,ob3,ob4,ob5,ob6,ob7,ob8,sum;
	ob1.setV(10);
	ob2.setV(20);
	ob3.setV(20);
	ob5.setV(100);
	ob6.setV(200);
	ob7.setV(-100);
	
	ob4 = ob1 + ob2 + ob3;
	ob8 = ob5+ob6+ob7
	
	sum =ob4+ob8;
	
	sum.getV();
	return 0;
}