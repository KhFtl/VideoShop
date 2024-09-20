#pragma once
#include<iostream>
#include<vector>
#include"EnterKeyboard.h"
#include"windows.h"
#include <locale>;
using namespace std;
vector<Genre> genres;
vector<Film> films;
string fileName = "films.dat";
int ShowMenuFilms()
{
	int command;
	cout << "1. Ввести фільми з клавіатури" << endl;
	cout << "2. Показати всі фільми в крамниці" << endl;
	cout << "3. Введення жанрів" << endl;
	cout << "4. Виведення жанрів" << endl;
	cout << "5. Пошук фільму за назвою" << endl;
	cout << "6. Пошук фільму за жанром" << endl;
	cout << "7. Вихід" << endl;
	cin >> command;
	return command;
}

void Start()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int command=0;
	while (command != 7)
	{
		command = ShowMenuFilms();
		if (command == 1)
		{
			int count;
			if (films.size() > 0)
			{
				cout << "Фільми мають " << films.size() << " записів очистити їх? (y/n)";
				char answer; cin >> answer;
				if (answer == 'y') films.clear();
			}
			cout << "Кількість фільмів: "; cin >> count;

			for (int i = 0; i < count; i++)
			{
				films.push_back(EnterFilm());
			}
			if (films.size() > 0)
			{
				WriteFilms(films,fileName);
			}
		}
		if (command == 2)
		{
			films = GetFilms(fileName);
			PrintFilms(films);
		}
		if (command == 3)
		{

		}
		if (command == 4)
		{

		}
		if (command == 5)
		{

		}
		if (command == 6)
		{
			
		}
	}
	cout << "Дякую за використання програми!!!! Буду сумувати за Вами";
}
