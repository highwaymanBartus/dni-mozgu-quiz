#include "include.h"
#include "Pytanie.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
constexpr auto RESET = "\033[0m";
constexpr auto RED = "\033[31m";
constexpr auto GREEN = "\033[32m";

std::vector<int> LosujKolejnosc(int liczbaPytan)
{
	std::vector<int> kolejnosc(liczbaPytan);

	for (int i = 0; i < liczbaPytan; ++i)
	{
		kolejnosc[i] = i + 1;
	}

	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(kolejnosc.begin(), kolejnosc.end(), generator);

	if (liczbaPytan > 10)
		kolejnosc.resize(10);
	return kolejnosc;
}

bool Gra(std::vector<Pytanie*>& zestawPytan)
{
	bool flagaPierwszePytanie = true;
	int iloscProbPierwszegoPytania = 0;
	int iloscPrawidlowychOdpowiedzi = 0;

	while (!zestawPytan.empty())
	{
		Pytanie* obecnePytanie = zestawPytan[0];

		WyswietlPytanie(*obecnePytanie);

		char wyborChar = 'X';
		int wyborInt = -1;

		while (true)
		{
			cin >> wyborChar;
			wyborChar = toupper(wyborChar);

			if (wyborChar >= 'A' && wyborChar <= 'D')
				break;
			else
			{
				cout << "Wprowadź znak A, B, C lub D. Wielkość znaku nie ma znaczenia." << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}

		switch (wyborChar)
		{
		case 'A':
		case 'a':
			wyborInt = 0;
			break;
		case 'B':
		case 'b':
			wyborInt = 1;
			break;
		case 'C':
		case 'c':
			wyborInt = 2;
			break;
		case 'D':
		case 'd':
			wyborInt = 3;
			break;
		}

		bool wynik = obecnePytanie->ZweryfikujOdpowiedz(wyborInt);
		
		WyswietlWynik(*obecnePytanie, wyborInt, wynik, flagaPierwszePytanie, iloscProbPierwszegoPytania);

		if (wynik == false && flagaPierwszePytanie == false)
		{
			cout << "---" << endl;
			cout << RED << "Zła odpowiedź! Przegrywasz! :(" << RESET << endl;
			cout << "Udzieliłeś prawidłowej odpowiedzi: " << GREEN << iloscPrawidlowychOdpowiedzi << " razy!" << RESET << endl;
			return false;
		}

		if (wynik == false && flagaPierwszePytanie == true && iloscProbPierwszegoPytania < 3)
		{
			cout << RED << "Zła odpowiedź! Spróbuj jeszcze raz!" << RESET << endl;
			iloscProbPierwszegoPytania++;
			if (iloscProbPierwszegoPytania == 2)
				flagaPierwszePytanie = false;
		}

		if (wynik)
		{
			zestawPytan.erase(zestawPytan.begin());
			iloscPrawidlowychOdpowiedzi++;
			flagaPierwszePytanie = false;
		}

		system("pause");
	}

	cout << GREEN << "Gratulacje! Udało Ci się odpowiedzieć na wszystkie nasze pytania! Sukces! :)" << RESET << endl;

}

void WyswietlPytanie(Pytanie& obecnePytanie)
{
	system("cls");
	cout << obecnePytanie.getText() << endl;

	cout << "A) " << obecnePytanie.getOdp(0) << endl;
	cout << "B) " << obecnePytanie.getOdp(1) << endl;
	cout << "C) " << obecnePytanie.getOdp(2) << endl;
	cout << "D) " << obecnePytanie.getOdp(3) << endl;
}

void WyswietlWynik (Pytanie& obecnePytanie, int wyborInt, bool wynik, bool flagaPierwszePytanie, int iloscProbPierwszegoPytania)
{
	system("cls");
	cout << obecnePytanie.getText() << endl;
	
	int prawidlowaOdp = obecnePytanie.getPrawidlowaOdpInt();

	for (int i = 0; i < 4; ++i)
	{
		if (wynik && i == wyborInt)
			cout << GREEN << char('A' + i) << ") " << obecnePytanie.getOdp(i) << RESET << endl;
		else if (!wynik && i == prawidlowaOdp && iloscProbPierwszegoPytania == 2)
			cout << GREEN << char('A' + i) << ") " << obecnePytanie.getOdp(i) << RESET << endl;
		else if (!wynik && i == prawidlowaOdp && !flagaPierwszePytanie)
			cout << GREEN << char('A' + i) << ") " << obecnePytanie.getOdp(i) << RESET << endl;
		else if (!wynik && i == wyborInt && iloscProbPierwszegoPytania < 3)
			cout << RED << char('A' + i) << ") " << obecnePytanie.getOdp(i) << RESET << endl;
		else
			cout << char('A' + i) << ") " << obecnePytanie.getOdp(i) << endl;
	}
}