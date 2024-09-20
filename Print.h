#pragma once
#include<iostream>
#include"VideoData.h"
#include<vector>
using namespace std;

void PrintGenre(vector<Genre> genres)
{
	cout << "--------Æàíðè---------" << endl;
	for (int i = 0; i < genres.size(); i++)
	{
		cout << i + 1 << ". " << genres[i].GenreName << "\t" << genres[i].RestrictionsByAge << endl;
	}
	cout << "----------------------" << endl;
}