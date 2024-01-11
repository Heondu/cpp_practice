#include <iostream>

int main(void)
{
	while(true)
	{
		int sellMoney;
		
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin>>sellMoney;
		
		if (sellMoney == -1)
		{
			std::cout<<"프로그램을 종료합니다."<<std::endl;
			return 0;
		}
			
		std::cout<<"이번 달 급여 : "<<50 + sellMoney * 0.12<<std::endl;
	}
}