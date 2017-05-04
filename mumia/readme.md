Wejście

W pierwszej linijce znajduje się jedna liczba n (1 ≤ n ≤ 50) oznaczajaca rozmiar komnaty. W kolejnych n linijkach znajduje się po n liczb z zakresu od 0 do 9 stanowiących opis komnaty. Mumia znajduje się w górnym lewym rogu. Jej sarkofag w prawym dolnym.
Wyjście

Wypisz jedną liczbę określającą najmniejszą sumę w jakiej mumia może najkrótszą ścieżką dojść do sarkofagu.
Przykład

Dla danych wejściowych
2
1 1
3 2
poprawną odpowiedzią jest
4
Najlepsza ścieżka to 1 + 1 + 2.
Dla danych wejściowych
5
0 0 1 1 1
1 0 1 1 1
0 0 1 1 1
0 1 1 1 1
0 0 0 0 0
poprawną odpowiedzią jest
1

Zwróć uwagę, że mumia mogłaby w ogóle uniknąć światła idąc cały czas po zerach – jednak nie jest to najkrótsza ścieżka więc mumia nie bierze jej pod uwagę.
