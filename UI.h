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
	cout << "1. ������ ������ � ���������" << endl;
	cout << "2. �������� �� ������ � ��������" << endl;
	cout << "3. �������� �����" << endl;
	cout << "4. ��������� �����" << endl;
	cout << "5. ����� ������ �� ������" << endl;
	cout << "6. ����� ������ �� ������" << endl;
	cout << "7. �����" << endl;
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
				cout << "Գ���� ����� " << films.size() << " ������ �������� ��? (y/n)";
				char answer; cin >> answer;
				if (answer == 'y') films.clear();
			}
			cout << "ʳ������ ������: "; cin >> count;

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
	cout << "����� �� ������������ ��������!!!! ���� �������� �� ����";
}
