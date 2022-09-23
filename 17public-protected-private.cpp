#include<iostream>
using namespace std;

class Bank
{
	protected:
		int atmPin;
		float balance;
		int acc_num;
	public:
		string bankname = "HDFC";
		string IFSC = "HDFC000N";
		
		
	
};

class Rishi : public Bank
{
	public:
		
		void getDetailsOfRishi()
		{
			cout<<"Enter ATMPIN :";
			cin>>atmPin;
			cout<<"Atmpin  = "<<atmPin<<endl;
		}
};

class Dev : public Bank
{
	public:
		
		void getDetailsOfDev()
		{
//			cout<<"Enter ATMPIN :";
//			cin>>atmPin;
atmPin=1234;
			cout<<"Atmpin  = "<<atmPin<<endl;
		}
};

//class Xuser 
//{
//	public:
//	void getAtm()
//	{
//		cout<<atmPin<<endl;
//	}
//};



int main()
{
	
	Rishi obj;
	Dev obj1;
	obj.getDetailsOfRishi();
	obj1.getDetailsOfDev();
	return 0;
}

