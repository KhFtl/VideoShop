#pragma once
#include<iostream>
#include<vector>
#include"VideoData.h"
#include"DAL.h"
#include"Print.h"
using namespace std;

//Введення з клавіатури одного фільму
Film EnterFilm()
{
	Film film;
	Genre genre;
	cout << "Назва фільму: ";
	cin >> film.FilmName;
	cout << "Режисер фільму: ";
	cin >> film.Director;
	vector<Genre> genres = GetGenres("genre.dat");
	PrintGenres(genres);
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
//Введення з клавіатури жанру
Genre EnterGenre()
{
	Genre genre;
	cout << "Жанр: "; cin >> genre.GenreName;
	cout << "Вікові обмеження: "; cin >> genre.RestrictionsByAge;
	return genre;

}