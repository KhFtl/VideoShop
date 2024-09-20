#include<iostream>
#include<vector>
#include"EnterKeyboard.h"
#include"windows.h"
#include <locale>;
using namespace std;
vector<Genre> genres;
vector<Film> films;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	films = GetFilms("films.dat");
	PrintFilms(films);
	return 0;
}