#include "matrix.h"
#include <iostream>

matrix::matrix()
{
    for (int wiersz=0; wiersz<N_ROW; ++wiersz){
        for(int kolumna=0; kolumna<N_COL; ++kolumna)
            tablica[wiersz][kolumna]=0;
    }

}

matrix::matrix(double diag)
{
    for (int wiersz=0; wiersz<N_ROW; ++wiersz){
        for(int kolumna=0; kolumna<N_COL; ++kolumna)
            tablica[wiersz][kolumna]=0;
    }
    for (int i=0; i<N_ROW; ++i) {
        tablica[i][i]=diag;
    }
}

matrix::matrix(double tab[N_ROW][N_COL])
{
    for (int wiersz=0; wiersz<N_ROW; ++wiersz){
        for(int kolumna=0; kolumna<N_COL; ++kolumna)
            tablica[wiersz][kolumna]=tab[wiersz][kolumna];
    }

}

/*matrix::matrix(matrix &k)
{


}
*/


void matrix::print()
{
    for (int wiersz=0; wiersz<N_ROW; ++wiersz){
        for(int kolumna=0; kolumna<N_COL; ++kolumna){
            std::cout<<tablica[wiersz][kolumna]<<"\t";
            }
        std::cout<<"\n";
    }

}

void matrix::t(){
	double temp;
    for (int wiersz=0; wiersz < N_ROW-1; ++wiersz)
		for (int kolumna=wiersz+1; kolumna<N_COL; ++kolumna) {
			temp = tablica[wiersz][kolumna];
			tablica[wiersz][kolumna]=tablica[kolumna][wiersz];
			tablica[kolumna][wiersz]=temp;
		}
}
