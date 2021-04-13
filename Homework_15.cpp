#include <iostream>

int main()
{
	int a, b;
	std::cout << "Enter the length of the loop: "; //Вводим длину цикла.
	std::cin >> a;
	std::cout << "Odd enter 1. Even enter 2.: "; //Делаем выбор "b": Нечётные 1. Чётные 2.
	std::cin >> b;

	for (int i = 1; i <= a; i++)

		if (b == 1) //Если выбираем нечётные.
		{
			if (i % 2 != 0) //Если остаток после деления на 2 не равен 0.
			{
				std::cout << i << "\n";
			}
		}

		else if (b == 2) //Иначе если выбираем чётные
		{
			if (i % 2 == 0) //Если остаток после деление равен 0.
				std::cout << i << "\n";
		}
}