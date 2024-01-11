#include <iostream>

int main(void)
{
	int val;
	
	std::cout<<"숫자 : ";
	std::cin>>val;
	
	for (int i = 1; i < 10; i++)
		std::cout<<val<<" x "<<i<<" = "<<val*i<<std::endl;
	
	return 0;
}