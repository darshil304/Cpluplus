#include<iostream>
using namespace std;

class unary_overload
{
	public:
		int value;
		
		void setValue(int v)
		{
			value=++v;
		}
		
		void operator ++ ()
		{
			
			--value;
			
		}
		
		void getValue()
		{
			cout<<value<<endl;
		}
	
};


int main()
{
	
	unary_overload obj;
	obj.setValue(7);
	++obj;
	obj.getValue();
	return 0;
}