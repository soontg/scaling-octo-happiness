#include<iostream>

int main()
{
	int year;
	std::cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		std::cout << "�����Դϴ�" << std::endl;
	}
	else if (year % 100 == 0)
	{
		std::cout << "����Դϴ�" << std::endl;
	}
	else
	{
		std::cout << "�ƹ��͵� �ƴմϴ�" << std::endl;
	}
}