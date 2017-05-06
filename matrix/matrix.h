#ifndef MATRIX_H
#define MATRIX_H
class matrix
{
public:
matrix();
matrix(double diag);
matrix(double tab[3][3]);
// matrix(matrix &k);
void print();
void t();
double get(int row, int col) const {return tablica[row][col];} // inline function
void put(int row, int col, double liczba){tablica[row][col]=liczba;} // inline function


protected:


private:
static const int N_ROW=3; //declare static value that cannot be changed
static const int N_COL=3; //value has to be declared during const declaration
// static here means that all objects of this class will be [3][3]
double tablica[N_ROW][N_COL];
//std::vector<std::vector<double>> tablica;


matrix dodawanie (const matrix &a, const matrix &b){
matrix wynik;
for (int wiersz=0; wiersz<Matrix::n_row;++wiersz)
    for (int kolumna=0; kolumna<matrix::n_col;++kolumna)
        wynik.put (wiersz,kolumna, a.get(wiersz,kolumna)+b.get(wiersz,kolumna));

        return wynik;
}
};
#endif // MATRIX_H
