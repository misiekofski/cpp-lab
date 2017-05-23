## Bank 1
Bajtocki Bank Bitowy (w skrócie BBB) ma największą w Bajtocji sieć bankomatów. BBB postanowił usprawnić swoje bankomaty i zwrócił się do Ciebie o pomoc. Środkiem płatniczym w Bajtocji są banknoty o nominałach b_1, b_2, ..., b_n. BBB postanowił, że bankomaty powinny wypłacać żądaną kwotę w jak najmniejszej łącznej liczbie banknotów.
## Wejście
W pierwszym wierszu wejścia znajduje się liczba nominałów 1 <= n <= 200. Drugi wiersz zawiera n liczb całkowitych 1<= b_i <= 20000 pooddzielanych pojedynczymi odstępami (Każdego nominału mamy tylko jeden banknot, nominały mogą się powtarzać). W ostatnim, trzecim wierszu wejścia znajduje się jedna liczba całkowita 1<= k <= 20000 - kwota, którą bankomat ma wypłacić.
## Wyjście
Wypisz najmniejszą liczbę potrzebnych banknotów do wypłacenia kwoty k, lub -1 jeśli tego nie da się zrobić.
## Przykład

#### Dla danych wejściowych
6

1 1 4 5 7 9

18

#### poprawną odpowiedzią jest
3


## Bank 2
Bajtocki Bank Bitowy (w skrócie BBB) ma największą w Bajtocji sieć bankomatów. BBB postanowił usprawnić swoje bankomaty i zwrócił się do Ciebie o pomoc. Środkiem płatniczym w Bajtocji są banknoty o nominałach b_1, b_2, …, b_n. BBB postanowił, że bankomaty powinny wypłacać żądaną kwotę w jak najmniejszej łącznej liczbie banknotów.

## Wejście
W pierwszym wierszu wejścia znajduje się liczba nominałów 1 <= n <= 200. Drugi wiersz zawiera n liczb całkowitych 1<= b_i <= 20000 pooddzielanych pojedynczymi odstępami. Trzeci wiersz zawiera n liczb całkowitych 1 <= c_i <= 20000 , pooddzielanych pojedynczymi odstępami; c_i jest liczbą banknotów o nominale b_i znajdujących się w bankomacie. W ostatnim, czwartym wierszu wejścia znajduje się jedna liczba całkowita 1<= k <= 20000 - kwota, którą bankomat ma wypłacić.

## Wyjście
Wypisz najmniejszą liczbę potrzebnych banknotów do wypłacenia kwoty k, lub -1 jeśli tego nie da się zrobić.

## Przykład
#### Dla danych wejściowych

6

1 1 4 5 7 9

1 1 1 1 1 1

18


#### poprawną odpowiedzią jest
3
