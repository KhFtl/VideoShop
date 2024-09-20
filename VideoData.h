#pragma once
#include <string>
using namespace std;
//-----Типи даних для проекту "Магазин Відео дисків"--------//

//------Жанри
struct Genre {
	string GenreName;//Назва жанру
	int RestrictionsByAge;//Обмеження за віком жанрку
};

//------Фільми на дисках
struct Film {
	string FilmName;//Назва іфльму
	string Director;//Режисер
	Genre FilmGenre;//Жанр фільму
	double Raiting;//Рейтинг фільму
	double PriceForDisk;//Ціна за один диск
};