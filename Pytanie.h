#pragma once
#include <string>
#include <array> 
#include <vector>
#include <stdexcept>

using namespace std;

class Pytanie
{
protected:
	int id;
	string text;
	array<string, 4> odpowiedzi;
	int prawidlowaOdp;

	void setPrawidlowaOdp(int index) { this->prawidlowaOdp = index; }
	void setOdpowiedzi(const vector<string>& noweOdpowiedzi) { std::copy(noweOdpowiedzi.begin(), noweOdpowiedzi.end(), odpowiedzi.begin()); }

public:
	Pytanie();
	Pytanie(int id, const string& text, const array<string, 4>& odpowiedzi, int prawidlowaOdp);
	string getOdp(int index) const;
	string getText() const { return text; }
	string getPrawidlowaOdpString() const { return odpowiedzi[prawidlowaOdp]; }
	int getPrawidlowaOdpInt() const { return prawidlowaOdp; }
	void setPrawidlowaOdpIndex(char odp);
	void setPrawidlowaOdpIndex(int odp);
	bool ZweryfikujOdpowiedz(int wyborInt) const;
	static void WymieszajOdpowiedzi(vector<Pytanie*>& kompletPytan);
	vector<string> getOdpowiedzi() const { return vector<string>(odpowiedzi.begin(), odpowiedzi.end()); }
};