#pragma once
#include<iostream>
#include<vector>
#include"VideoData.h"
#include"DAL.h"
#include"Print.h"
using namespace std;

//Введення з клавіатури одного фільму
Film GetFilm()
{
	Film film;
	Genre genre;
	cout << "Назва фільму: ";
	cin >> film.FilmName;
	cout << "Режисер фільму: ";
	cin >> film.Director;
	vector<Genre> genres = GetGenre("genre.dat");
	PrintGenre(genres);
	int numGen;
	cout << "Оберіть номер жанру: "; cin >> numGen;
	if (numGen > genres.size() || numGen < 0)
	{
		numGen = 0;
	}
	genre = genres[numGen - 1];
	film.FilmGenre = genre;
	cout << "Рейтинг фільму: "; cin >> film.Raiting;
	cout << "Ціна за диск фільму: "; cin >> film.PriceForDisk;
	return film;
}