#define LAL_H
#include <iostream>
#include "math.h"
#include<stdbool.h>

using namespace std;

class Matris{

private:
double *entries;
int rows;
int cols;

public:
Matris(double *, int,int);
~Matris();
double *getEntries();
int getRows();
int getCols();
void print(void);
void matrisDoldur(int);

 Matris transpoze();
 
 
 Matris operator+(const Matris& m){
 int i; 
 double *entries = (double *)malloc((this->rows * this->cols) * sizeof(double));
 for(i = 0; i<this->rows * this->cols; i++){
 entries[i] = this->entries[i] + m.entries[i]; 
 }
  return Matris(entries,this->rows,this->cols);
 }
 
 
 Matris operator-(const Matris& m){
 int i; 
 double *entries = (double *)malloc((this->rows * this->cols) * sizeof(double));
 for(i = 0; i<this->rows * this->cols; i++){
 entries[i] = this->entries[i] - m.entries[i]; 
 }
 return Matris(entries,this->rows,this->cols);
 }
 
 
 Matris operator*(const Matris& m){
 int i; 
 double *entries = (double *)malloc((this->rows * this->cols) * sizeof(double));
 for(i = 0; i<this->rows * this->cols; i++){
 entries[i] = this->entries[i] * m.entries[i]; 
 }
  return Matris(entries,this->rows,this->cols);
 }
 
 
 double* operator==(const Matris &);
 
};


class Vector: public Matris{
     
private:
     double norm;

public:
Vector(double *,int);
~Vector();
void print(void);
};


