﻿/*Задание 4. Рамка
Что нужно сделать
Напишите программу, которая рисует с помощью символьной графики прямоугольную рамку.Для вертикальных линий используйте символ вертикального штриха « | », а для горизонтальных — дефис « - ».
Пусть пользователь вводит ширину и высоту рамки.

Пример выполнения

6 — ширина, 4 — высота :


Рекомендации по выполнению
Ширину и высоту удобно вводить с помощью одной операции std::cin :

int width, height;
std::cin >> width >> height;
Что оценивается
Рамка рисуется в соответствии с заданными размерами и с помощью условных конструкций и циклов.*/

#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите ширину и высоту рамки: ";
	int width, height;
	std::cin >> width >> height;

	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= width; x++) {
			if (x == 1 || x == width) std::cout << "|";
			else if (y == 1 || y == height) std::cout << "-";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
}
