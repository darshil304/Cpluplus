#include<iostream>
using namespace std;

class bank
{
	private:
		
		int atmPin=1234;
		float balance = 234534.34;
		
	public:
		string bank_name = "HDFC";
		string IFSC = "HDFC000N";
		int acc_no = 123123;	
};

int main()
{
	bank obj;
	
	cout<<obj.atmPin;
	cout<<"Account Num = "<<obj.acc_no<<endl;
	cout<<"Bank name = "<<obj.bank_name<<endl;
	cout<<"IFSC = "<<obj.IFSC<<endl;
	
	
}