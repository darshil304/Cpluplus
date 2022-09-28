#include<iostream>
using namespace std;

class Rajendra
{
	private:
		int money=500;
	public:
		
		friend class Anand;
};

class Anand : public Rajendra
{
	public:
		
		void getMoney(Rajendra obj)
		{
			cout<<obj.money<<endl;
		}
};


int main()
{
	Rajendra r;
	Anand a;
	a.getMoney(r);
	return 0;
}
