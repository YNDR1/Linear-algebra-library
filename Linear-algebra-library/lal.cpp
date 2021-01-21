#include "lal.h"
#include <iostream>
#include "math.h"
#include <stdbool.h>
#include "time.h"
using namespace std;


Matris::Matris(double *e, int r,int c){
this->entries= e;
this->rows = r;
this->cols = c;
}

Matris::~Matris(){


}
double *Matris::getEntries(){
return this->entries;
}

int Matris::getRows(){
return this->rows;
}
int Matris::getCols(){
return this->cols;
}
void Matris::matrisDoldur(int boyut){ 
double *entries = (double *) malloc((this->cols * this->rows) * sizeof(double));
srand(time(NULL));
int i, j;
 for(i = 0; i < boyut; i++) {
 
 this->entries[i] == (double)(rand()%10)+2.0;

 }
};
void Matris::print() {
double **matrix =(double **)malloc(this->rows*sizeof(double *));
          
          int i,j;
          for (i=0; i<this->rows; i++) {
                    matrix[i] = (double *)malloc(this->cols * sizeof(double));
          }

          for(i=0; i<this->rows; i++) {
                    for(j=0; j<this->cols; j++) {
                              matrix[ i ][ j ] = this->entries[ i*this->cols + j ];
                    }
          }

          for(i=0; i<this->rows; i++) {
                    for(j=0; j<this->cols; j++) {
                            printf("%0.2f\t",matrix[i][j]);
                    }

                    puts("");
          }
          cout<<"Matris yazildi " <<endl;
}
/*
   Matris Matris::transpoze(Matris &m){
   int i,j;
   double **transpoz = (double **)malloc((m.getRows()* sizeof(double *));
   for(i = 0; i<m.getRows(); i++){
   transpoz[i] = (double *)malloc(m.getCols() * sizeof(double));
   }
   for(i = 0; i<m.getRows; i++){
   for(j = 0; j<m.getCols; j++){
   transpoz[j][i] = m.getEntries[i * m.getCols +j];
   }  
   } 
  return Matris();
} 
*/
Vector::Vector(double *d,int row):Matris(d,row,1){
                    int i,sum=0;
                    for(i=0; i<row; i++) {
                              sum+=d[i]*d[i];
                    }
                    this->norm=sqrt(sum);
}
Vector::~Vector() {
     
}


