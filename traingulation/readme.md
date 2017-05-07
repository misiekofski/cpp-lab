Dany jest n-kąt wypukły wraz z funkcją f : VxV -> N, gdzie V oznacza zbiór wierzchołków wielokąta. Oznacza to, że dane są koszty połączenia każdej pary wierzchołków ze zbioru V. Chcemy dokonać triangulacji wielokąta, tzn. wybrać takie przekątne, aby wielokąt podzielić na rozłączne (obszarowo) trójkąty. Naszym celem jest dokonanie optymalnej triangulacji, w takim sensie, aby sumaryczny koszt wybranych przekątnych był jak najmniejszy. Twoim zadaniem jest napisać program, który wyznaczy i wypisze optymalny koszt.
Wejście


Wierzchołki wielokąta są numerowane od 1 do n. W pierwszym wierszu dana jest liczba 3 ≤ n ≤ 200. W drugim wierszu podane są koszty krawędzi (1,2), (1,3), ..., (1,n). W trzecim wierszu dane są koszty krawędzi (2,3), (2,4), ..., (2,n). W ostatnim (n-tym) wierszu podany jest koszt krawędzi (n-1,n).
Wyjście


Na wyjście wypisz tylko jedną liczbę --- optymalny koszt podziału wielokąta na trójkąty. Do kosztu wliczamy także boki wielokąta.
Przykład

Dla danych wejściowych

5

254 77 816 381 

435 769 11 

562 164 

446 


których ilustracja jest następująca: 

![diagram](http://www.rafalnowak.pl/wiki/images/f/f3/1.jpg)


poprawną odpowiedzią jest

2253
