#pragma once
#include<iostream>
#include<vector>
#include"VideoData.h"
#include"DAL.h"
#include"Print.h"
using namespace std;

//�������� � ��������� ������ ������
Film GetFilm()
{
	Film film;
	Genre genre;
	cout << "����� ������: ";
	cin >> film.FilmName;
	cout << "������� ������: ";
	cin >> film.Director;
	vector<Genre> genres = GetGenre("genre.dat");
	PrintGenre(genres);
	int numGen;
	cout << "������ ����� �����: "; cin >> numGen;
	if (numGen > genres.size() || numGen < 0)
	{
		numGen = 0;
	}
	genre = genres[numGen - 1];
	film.FilmGenre = genre;
	cout << "������� ������: "; cin >> film.Raiting;
	cout << "ֳ�� �� ���� ������: "; cin >> film.PriceForDisk;
	return film;
}