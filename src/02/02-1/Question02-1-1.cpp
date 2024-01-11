#include <iostream>
using namespace std;

void Adder(int &ref)
{
	ref += 1;
}

void ReverseSign(int &ref)
{
	ref *= -1;
}

int main(void)
{
	int val = -10;
	
	Adder(val);
	cout<<"Adder(val) : "<<val<<endl;
	
	ReverseSign(val);
	cout<<"Reverse(val) : "<<val<<endl;
	
	return 0;
}