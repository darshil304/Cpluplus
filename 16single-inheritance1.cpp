#include<iostream>
using namespace std;
class Father
{
	protected:
		int money=100;

};

class Mother : public Father
{
	public:
		
		void getMoney()
		{
			cout<<money;
		}
	
};

class Son : public Father
{
	public:
		void getM()
		{
			cout<<money;
		}
		
};




int main()
{
	
	Mother obj;
	Son x;
	obj.getMoney();
	x.getM();

	
	return 0;
}