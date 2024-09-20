#pragma once
#include<fstream>
#include"VideoData.h"
#include<vector>
using namespace std;
//vector<Genre> genres;
//vector<Film> films;

//-------------------------------------�����-----------------------------------
//������� ����� � ���������� ����� 
vector<Genre> GetGenres(string fileName)
{
	vector<Genre> genres;
	if (fileName.length() < 5) return genres;
	Genre genre;
	ifstream inp(fileName);
	while (!inp.eof())
	{
		inp >> genre.GenreName;
		inp >> genre.RestrictionsByAge;
		genres.push_back(genre);
	}
	inp.close();
	genres.pop_back();
	return genres;
}
//����� ��� ����� � ��������� ����
void WriteGenres(vector<Genre> genres, string fileName)
{
	if (fileName.length() < 5) return;
	ofstream out(fileName);
	for (int i = 0; i < genres.size(); i++)
	{
		out << genres[i].GenreName<<endl;
		out << genres[i].RestrictionsByAge << endl;
	}
	out.close();
}
//------------------------------------------------------------------------------

//-------------------------------------Բ����-----------------------------------
//����� ������ � �������� ����
void WriteFilms(vector<Film> films, string fileName)
{
	if (fileName.length() < 5) return;
	ofstream out(fileName);
	for (int i = 0; i < films.size(); i++)
	{
		out << films[i].FilmName << endl;
		out << films[i].Director << endl;
		out << films[i].FilmGenre.GenreName << endl;
		out << films[i].FilmGenre.RestrictionsByAge << endl;
		out << films[i].Raiting << endl;
		out << films[i].PriceForDisk << endl;
	}
	out.close();
}
//�������� ��� ������ � �����
vector<Film> GetFilms(string fileName)
{
	Film film;
	Genre genre;
	vector<Film> films;
	if (fileName.length() < 5) return films;
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
	films.pop_back();
	return films;
}
//----------------------------------------------------------------------------