#include<iostream>
using namespace std;
class Vani;
class Twinkle
{
	private:
		int m1=100;
	public:
		friend void Hinal(Vani V, Twinkle T);
};

class Vani
{
	private:
		int m2=100;
	public:
		
		friend void Hinal(Vani V, Twinkle T);
	
};

void Hinal(Vani V, Twinkle T)
{
	cout<<T.m1+V.m2<<endl;
}

int main()
{
	
	Vani ob1;
	Twinkle ob2;
	Hinal(ob1, ob2);
	
	return 0;
}