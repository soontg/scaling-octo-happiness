#include<iostream>

int main()
{
	int year;
	std::cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		std::cout << "윤년입니다" << std::endl;
	}
	else if (year % 100 == 0)
	{
		std::cout << "평년입니다" << std::endl;
	}
	else
	{
		std::cout << "아무것도 아닙니다" << std::endl;
	}
}