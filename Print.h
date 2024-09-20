#pragma once
#include<iostream>
#include"VideoData.h"
#include<vector>
#include <windows.h>
#include<iomanip>
using namespace std;
void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}
void PrintGenres(vector<Genre> genres)
{
	cout << "--------�����---------" << endl;
	for (int i = 0; i < genres.size(); i++)
	{
		cout << i + 1 << ". " << setw(15)<<genres[i].GenreName << setw(5) << genres[i].RestrictionsByAge << endl;
	}
	cout << "----------------------" << endl;
}
void PrintFilms(vector<Film> films)
{
	SetColor(15, 1);
	cout << "Գ���� � ��������" << endl;
	SetColor(7, 0);
	for (int i = 0; i < films.size(); i++)
	{
		cout << "----------Գ���-" << i + 1 << "-----------" << endl;
		SetColor(6, 0);
		cout << "�����: "<< films[i].FilmName << endl;
		SetColor(7, 0);
		cout << "�������: " << films[i].Director << endl;
		cout << "����: "<< films[i].FilmGenre.GenreName << endl;
		cout << "��������� �� ����: " << films[i].FilmGenre.RestrictionsByAge << endl;
		cout << "�������: "<<  films[i].Raiting << endl;
		SetColor(10, 0);
		cout << "ֳ�� �a ����: " << films[i].PriceForDisk << " UAH" << endl;
		SetColor(7, 0);
		cout << "-----------------------------------------" << endl;
	}
}