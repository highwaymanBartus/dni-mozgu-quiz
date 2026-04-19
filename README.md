# dni-mozgu-quiz
Konsolowa gra quizowa użyta podczas uczelnianych Dni Mózgu 2024, które miałem przyjemność współorganizować wraz z Toruńskim Kołem Kognitywistycznym.

Aplikacja losuje zestaw pytań, miesza odpowiedzi i pozwala użytkownikowi odpowiadać na pytania wielokrotnego wyboru (A–D). System weryfikuje poprawność odpowiedzi, prowadzi prostą logikę „życia” (szczególnie w pierwszym pytaniu) oraz kończy grę po błędnej odpowiedzi lub po przejściu całego zestawu.

Projekt został zaprojektowany w sposób obiektowy z wykorzystaniem klasy Pytanie, separacji logiki gry i funkcji pomocniczych oraz mechanizmów losowości.

# Technologie
- OPP C++ (vector, array, algorithm, random)
- środowisko Visual Studio 2022

# Funkcjonalności
- losowanie kolejności pytań
- mieszanie odpowiedzi (A-D)
- weryfikacja poprawności po przemieszaniu kolejności odpowiedzi
- mechanizm 'trzech żyć' przy pierwszym pytaniu
- kolorowanie wyników
- interaktywna konsola

# Czego się nauczyłem
- enkapculacji danych w klasie Pytanie
- separacji logiki od modelu danych
- operacje na wskaźnikach
