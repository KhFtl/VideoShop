#pragma once
#include<fstream>
#include"VideoData.h"
#include<vector>
using namespace std;
//vector<Genre> genres;
//vector<Film> films;

//-------------------------------------ЖАНРИ-----------------------------------
//Читання жанрів з текстового файлу 
vector<Genre> GetGenre(string fileName)
{
	if (fileName.length() < 5) return;
	vector<Genre> genres;
	Genre genre;
	ifstream inp(fileName);
	while (!inp.eof())
	{
		inp >> genre.GenreName;
		inp >> genre.RestrictionsByAge;
		genres.push_back(genre);
	}
	inp.close();
	return genres;
}
//Запис всіх жанрів в текстовий файл
void WriteGenres(vector<Genre> genres, string fileName)
{
	if (fileName.length() < 5) return;
	ofstream out(fileName);
	for (int i = 0; i < genres.size(); i++)
	{
		out << genres[i].GenreName;
		out << genres[i].RestrictionsByAge;
	}
	out.close();
}
//------------------------------------------------------------------------------

//-------------------------------------ФІЛЬМИ-----------------------------------
//Запис фільмів в ткстовий файл
void WriteFilms(vector<Film> films, string fileName)
{
	if (fileName.length() < 5) return;
	ofstream out(fileName);
	for (int i = 0; i < films.size(); i++)
	{
		out << films[i].FilmName;
		out << films[i].Director;
		out << films[i].FilmGenre.GenreName;
		out << films[i].FilmGenre.RestrictionsByAge;
		out << films[i].Raiting;
		out << films[i].PriceForDisk;
	}
	out.close();
}
//Введення всіх фільмів з файлу
vector<Film> GetFilms(string fileName)
{
	if (fileName.length() < 5) return;
	Film film;
	Genre genre;
	vector<Film> films;
	ifstream inp(fileName);
	while (!inp.eof())
	{
		inp >> film.FilmName;
		inp >> film.Director;
		inp >> genre.GenreName;
		inp >> genre.RestrictionsByAge;
		inp >> film.Raiting;
		inp >> film.PriceForDisk;
		film.FilmGenre = genre;
		films.push_back(film);
	}
	inp.close();
	return films;
}
//----------------------------------------------------------------------------