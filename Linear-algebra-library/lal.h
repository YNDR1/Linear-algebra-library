#define LAL_H
#include <iostream>
#include "math.h"
using namespace std;

class Matris{

private:
double *entries;
int rows;
int cols;

public:
Matris(double *, int,int);
~Matris();
void getEntries(void);
void getRows(void);
void getCols(void);
void print(void);
// Matris operator+(Matris *);
// Matris operator-(Matris *);
// Matris operator*(Matris *);
// Matris operator==(Matris *);

};


class Vektor: public Matris{
     
private:
     double norm;

public:
Vektor(double *,int);
~Vektor();
void print(void);
};


//void matrisDoldur(Matris *);
