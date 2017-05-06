#include <iostream>
#include "matrix.h"
int main(int argc, char *argv[])
{
matrix a;
//a.print();
//std::cout<<"\n";
matrix b(1);
//b.print();
//std::cout<<"\n";
double tabelka[3][3]={{1,2,3},{4,5,6},{7,8,9}};
matrix d(tabelka);

a=dodawanie(b,d);
a.print();

// d.print();
// std::cout << "\n po transponowaniu \n";
// d.t();
// d.print();

// std::cout<<"\n";
// std::cout<< "element 1,2 to :" << d.get(1,2) << std::endl;
// d.put(1,2,34);
// std::cout<< "element 1,2 po zmianie to :" << d.get(1,2);
//double **p=tabelka;
//matrix c(p);
//c.print();
return 0;
}
