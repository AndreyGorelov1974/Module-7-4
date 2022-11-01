

#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите количество воды в мл: ";
	int volumeWater;
	std::cin >> volumeWater;

	while (volumeWater < 0) {
		std::cout << std::endl << "Количество воды должно быть больше 0. Введите снова: ";
		std::cin >> volumeWater;
	}
}
