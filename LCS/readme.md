Słowem u nazywamy dowolny skończony ciąg liter z alfabetu {a,b,c,...,z}. Podsłowem słowa u jest jego dowolny podciąg, np. podsłowami słowa deskorolka są między innymi ola, elka, deska, kolka, sroka. 

Dla danych dwóch słów u i v należy znaleźć ich najdłuższe wspólne podsłowo. Na przykład, wspólne podsłowa słów u=deskorolka i v=stokrotka, to między innymi a, o, ka, kka, oa, sroka, sooka, skoka, skroka, soroka, skroka. Łatwo zauważyć, że nie istnieje wspólne podsłowo słów u i v o długości większej niż 6. Tak więc w tym przykładzie najdłuższym wspólnym podsłowem słów u i v jest zarówno słowo skroka jak i soroka.
Zadanie

Napisz program, który:
wczyta ze standardowego wejścia dwa słowa,
znajdzie dowolne z ich maksymalnie długich wspólnych podsłów.

Wejście

W każdym z dwóch wierszy znajduje się jedno słowo o długości nie większej niż 1000.

Wyjście

W jedynym wierszu wyjścia należy wypisać najdłuższe wspólne podsłowo słów z wejścia. 
Jeśli takich podsłów jest więcej niż jedno, należy wypisać dowolne z nich.

Przykład

Dla danych wejściowych
abba
baba
poprawną odpowiedzią jest

aba

Uwaga:
w powyższym przykładzie poprawną odpowiedzią jest także

bba
