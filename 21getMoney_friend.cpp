#include<iostream>
using namespace std;

class Alisha
{
	private:
		int money=500;
	public:
	
	friend void Dev(Alisha r1);
	
};
	void Dev(Alisha r1)
		{
			cout<<r1.money<<endl;
		}
int main()
{
	Alisha a;
	Dev(a);
	return 0;
}