#pragma once
#include <string>
using namespace std;
//-----���� ����� ��� ������� "������� ³��� �����"--------//

//------�����
struct Genre {
	string GenreName;//����� �����
	int RestrictionsByAge;//��������� �� ���� ������
};

//------Գ���� �� ������
struct Film {
	string FilmName;//����� ������
	string Director;//�������
	Genre FilmGenre;//���� ������
	double Raiting;//������� ������
	double PriceForDisk;//ֳ�� �� ���� ����
};