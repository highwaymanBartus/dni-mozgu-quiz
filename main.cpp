#include <iostream>
#include "include.h"
#include "Pytanie.h"
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");

	Pytanie p1(1, "Która część mózgu odpowiada głównie za kontrolę ruchów i koordynację?", { "kora mózgowa", "móżdżek", "hipokamp", "rdzeń kręgowy" }, 1);
	Pytanie p2(2, "Ile płatów ma mózg?", { "2", "5", "4", "6" }, 2);
	Pytanie p3(3, "Kto, pod względem sekwencji DNA, jest najbliższym “kuzynem” człowieka?", { "świnia", "kot", "szympans", "orangutan" }, 2);
	Pytanie p4(4, "Która z poniższych odpowiedzi związana jest z niezdolnością rozpoznawania twarzy wcześniej poznanych już osób?", { "afazja", "prozopagnozja", "aleksytymia", "praksja" }, 1);
	Pytanie p5(5, "Który płat odpowiada za myślenie abstrakcyjne?", { "skroniowy", "potyliczny", "czołowy", "ciemieniowy" }, 2);
	Pytanie p6(6, "Głównym neuroprzekaźnikiem pobudzającym w ośrodkowym układzie nerwowym jest:", { "serotonina", "dopamina", "kwas gamma-aminomasłowy", "glutaminian" }, 3);
	Pytanie p7(7, "Neuroestetyka skupia się na wyjaśnieniu zjawisk składających się na percepcję:", { "wrażeń smakowych", "dzieł sztuki", "przestrzeni", "gier komputerowych" }, 1);
	Pytanie p8(8, "Co ma kluczowe znaczenie w systemie aktywacji behawioralnej?", { "neurochemia mózgu", "społeczne normy", "wzorce genetyczne", "przyswajanie wiedzy" }, 0);
	Pytanie p9(9, "Który z nerwów czaszkowych jest najdłuższy:", { "n. bloczkowy", "n. trójdzielny", "n. nerw błędny", "n. odwodzący" }, 2);
	Pytanie p10(10, "Która z chorób nie należy do chorób neurodegeneracyjnych:", { "choroba Parkinsona", "choroba Capgrasa", "choroba Alzheimera", "choroba Creutzfeldta-Jakoba" }, 1);
	Pytanie p11(11, "Który arcymistrz szachów jako pierwszy przegrał ze sztuczną inteligencją (Deep Blue)?", { "Magnus Carlsen", "Garri Kasparow", "Beth Harmon", "Bobby Fischer" }, 1);
	Pytanie p12(12, "Prawdziwe stwierdzenie dotyczące endorfin to:", { "są to hormony stresu, które powodują uczucie lęku i niepokoju", "są uwalniane głównie podczas snu i nie mają związku z aktywnością fizyczną", "to substancje toksyczne, które organizm produkuje w reakcji na ból", "działają jak naturalne środki przeciwbólowe, poprawiają nastrój i są uwalniane m.in. podczas wysiłku fizycznego" }, 3);
	Pytanie p13(13, "Jaką rolę społeczną pełni iskanie?", { "pomaga budować więzi społeczne i redukować stres w grupach zwierząt", "służy wyznaczaniu hierarchii poprzez dominację nad innymi osobnikami", "jest formą agresji, której celem jest odstraszanie rywali", "pełni funkcję wyłącznie higieniczną i nie ma znaczenia społecznego" }, 0);
	Pytanie p14(14, "Z czego składa się kod binarny?", { "z liczb od 0 do 9, podobnie jak system dziesiętny", "to zestaw liter i cyfr używanych do programowania komputerów", "wyłącznie z dwóch cyfr: 0 i 1", "z trzech podstawowych symboli: 0, 1 i 2" }, 2);
	Pytanie p15(15, "Kim był Alan Turing?", { "politykiem", "filozofem", "matematykiem", "biologiem" }, 2);
	Pytanie p16(16, "Kartezjusz jest uznawany za prekursora, którego z poniższych poglądów na temat umysłu?", { "dualizm psychofizyczny", "behawioryzm", "monizm materialistyczny", "funkcjonalizm" }, 0);
	Pytanie p17(17, "Co było bodźcem warunkowym w eksperymencie z psami Pawłowa?", { "widok jedzenia", "światło lampy", "dźwięk dzwonka", "dotyk smyczy" }, 2);
	Pytanie p18(18, "Który test służy do oceny zdolności sztucznej inteligencji do naśladowania ludzkiego myślenia?", { "test Turinga", "test IQ", "test Rorschacha", "test Bellmana" }, 0);
	Pytanie p19(19, "Który neuroprzekaźnik jest głównie odpowiedzialny za uczucie przyjemności i nagrody?", { "dopamina", "serotonina", "acetylocholina", "glutaminian" }, 0);
	Pytanie p20(20, "Jakie zadanie pełni hipokamp?", { "odpowiada za kontrolę emocji", "reguluje funkcje życiowe, takie jak oddech", "uczestniczy w procesach pamięci i orientacji przestrzennej", "koordynuje ruchy ciała" }, 2);
	Pytanie p21(21, "Jaka jest przybliżona liczba neuronów w ludzkim mózgu?", { "10 milionów", "86 miliardów", "1 bilion", "100 tysięcy" }, 1);
	Pytanie p22(22, "Która półkula mózgu jest najczęściej związana z logicznym myśleniem i analizą?", { "lewa", "prawa", "obie w równym stopniu", "żadna" }, 0);
	Pytanie p23(23, "Jak nazywa się zdolność tkanki nerwowej do tworzenia nowych połączeń, mających na celu ich reorganizację, adaptację, zmienność i samonaprawę oraz procesy uczenia się i pamięci?", { "neuroplastyczność", "neurogeneza", "synestezja", "habituacja" }, 0);
	Pytanie p24(24, "Który hormon jest silnie związany z reakcją \"walcz lub uciekaj\"?", { "melatonina", "kortyzol", "oksytocyna", "serotonina" }, 1);
	Pytanie p25(25, "Jak nazywa się umiejętność niektórych osób do przypisywania kolorów dźwiękom lub liczbom?", { "pareidolia", "przetwarzanie multimodalne", "synestezja", "przetwarzanie peryferyjne" }, 2);
	Pytanie p26(26, "Która struktura mózgu jest kluczowa dla regulacji emocji, zwłaszcza strachu?", { "wzgórze", "hipokamp", "podwzgórze", "ciało migdałowate" }, 3);
	Pytanie p27(27, "Ile jest par nerwów czaszkowych?", { "12", "9", "30", "20" }, 0);
	Pytanie p28(28, "Która teoria osobowości zakłada istnienie id, ego i superego?", { "teoria cech osobowości Raymonda Cattella", "teoria społeczno-poznawcza Alberta Bandury", "psychoanaliza Zygmunta Freuda", "teoria hierarchii potrzeb Abrahama Maslowa" }, 2);
	Pytanie p29(29, "Neuron składa się:", { "z ciała (soma/perikarion) i odchodzących wypustek: dendrytów i aksonów", "z mieliny i związków chemicznych", "z neuroprzekaźników", "z tkanki tłuszczowej i kolagenu" }, 0);
	Pytanie p30(30, "Agorafobia to:", { "strach przed wiedzą", "strach przed otwartymi przestrzeniami", "strach przed pająkami", "strach przed krwią" }, 1);

	int liczbaPytan = 30;

	vector<Pytanie*> kompletPytan;

	kompletPytan = { &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10,
			&p11, &p12, &p13, &p14, &p15, &p16, &p17, &p18, &p19, &p20,
			&p21, &p22, &p23, &p24, &p25, &p26, &p27, &p28, &p29, &p30 };

	Pytanie::WymieszajOdpowiedzi(kompletPytan);

	vector<int> wylosowaneNumeryPytan = LosujKolejnosc(liczbaPytan);

	vector<Pytanie*> finalnyZestawPytan;
	
	for (int i = 0; i < wylosowaneNumeryPytan.size(); i++)
		finalnyZestawPytan.push_back(kompletPytan[wylosowaneNumeryPytan[i]]);

	cout << "Witamy na Tygodniu Mózgu! Zaczynamy quiz?" << endl;
	cout << "1 - Rozpocznij" << endl << "0 - Wyjdź" << endl;
	
	int inicjalizacja;

	while (true)
	{
		cin >> inicjalizacja;

		if (cin.good() && (inicjalizacja == 0 || inicjalizacja == 1))
			break;
		else
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}

	system("cls");
	if (inicjalizacja)
		Gra(finalnyZestawPytan);

	system("pause");
	return 0;
}