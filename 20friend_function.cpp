/*
Friend Function/Class
: to access private and protected members

Friend Function:
	
friend	datatype function-name();

Friend Class:
	
friend	class class-name;

*/

	


#include<iostream>
using namespace std;

class Rishi
{
	private:
		string tv="Watching...!";
		
	public:
	
	friend void darshil(Rishi ref);
};

	void darshil(Rishi ref) // int x
		{
			cout<<ref.tv <<"IPL 2022...!"<<endl;
		}


int main()
{
	Rishi obj; //int x=6;

	darshil(obj);// darshil(x)
	return 0;
}








