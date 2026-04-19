#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include "Pytanie.h"

Pytanie::Pytanie()
	: id(0), text("Pytanie"), odpowiedzi({ "A", "B", "C", "D" }), prawidlowaOdp(0) {}

Pytanie::Pytanie(int id, const string& text, const array<string, 4>& odpowiedzi, int prawidlowaOdp)
	: id(id), text(text), odpowiedzi(odpowiedzi), prawidlowaOdp(prawidlowaOdp) {}

void Pytanie::setPrawidlowaOdpIndex(char odp)
{
	if (odp >= 'A' && odp <= 'D')
		this->setPrawidlowaOdp(odp - 'A');
	else if (odp >= 'a' && odp <= 'd')
		this->setPrawidlowaOdp(odp - 'a');
	else
		throw invalid_argument("Niepoprawna odpowiedź.");
}

void Pytanie::setPrawidlowaOdpIndex(int odp)
{
	this->setPrawidlowaOdp(odp);
}

string Pytanie::getOdp(int index) const
{
	if (index < 0 || index >= 4)
		throw out_of_range("Error - wychodzisz poza array.");
	return odpowiedzi[index];
}

bool Pytanie::ZweryfikujOdpowiedz(int wyborInt) const
{
	return wyborInt == this->prawidlowaOdp;
}

void Pytanie::WymieszajOdpowiedzi(vector<Pytanie*>& kompletPytan)
{
	random_device rd;
	mt19937 generator(rd());

	for (Pytanie* pytanie : kompletPytan)
	{
		if (pytanie)
		{
			vector<string> odpowiedzi = pytanie->getOdpowiedzi();
			int prawidlowaOdpIndex = pytanie->getPrawidlowaOdpInt();
			string prawidlowaOdpowiedz = odpowiedzi[prawidlowaOdpIndex];

			std::shuffle(odpowiedzi.begin(), odpowiedzi.end(), generator);

			for (int i = 0; i < odpowiedzi.size(); ++i)
			{
				if (odpowiedzi[i] == prawidlowaOdpowiedz)
				{
					pytanie->setPrawidlowaOdpIndex(i);
					break;
				}
			}

			pytanie->setOdpowiedzi(odpowiedzi);
		}
	}
}