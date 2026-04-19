#pragma once
#include <string>
#include <vector>

using namespace std;

class Pytanie;

std::vector<int> LosujKolejnosc(int liczbaPytan);
bool Gra(std::vector<Pytanie*>& zestawPytan);
void WyswietlPytanie(Pytanie& obecnePytanie);
void WyswietlWynik(Pytanie& obecnePytanie, int wyborInt, bool wynik, bool flagaPierwszePytanie, int iloscProbPierwszegoPytania);