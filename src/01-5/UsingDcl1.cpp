#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout<<"So simple function!"<<std::endl;
		std::cout<<"In Namespace Hybrid!"<<std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	HybFunc();
	return 0;
}