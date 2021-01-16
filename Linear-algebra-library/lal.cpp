#include "lal.h"
#include <iostream>
#include "math.h"

using namespace std;


Matris::Matris(double *e, int r,int c){
this->entries= e;
this->rows = r;
this->cols = c;
}

Matris::~Matris(){
cout<< "Matris has been deleted" << endl;

}
void Matris::getEntires(){
return this->entries;
}
void Matris::getRows(){
return this->rows;
}
void Matris::getCols(){
return this->cols;
}
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
                              cout << matrix[i][j] << endl;
                    }

                    puts("");
          }
}


// Matris::operator+(Matris m){
// int i,j;
// for(i = 0; i < m.rows; i++){
// for(j = 0; j < m.cols; j++){
// rows += m[i][j];
// cols += m[i][j];
// }
// }
// }
// Matris::operator-(Matris m){
// int i,j;
// for(i = 0; i < m.rows; i++){
// for(j = 0; j < m.cols; j++){
// rows -= m[i][j];
// cols -= m[i][j];
// }
// }
// }
// Matris::operator*(Matris m){
//    int i,j;
// for(i = 0; i < m.rows; i++){
// for(j = 0; j < m.cols; j++){
// rows *= m[i][j];
// cols *= m[i][j];
// }
// }
// }
// Matris::operator==(Matris m){
// int i,j;
// for(i = 0; i < m.rows; i++){
// for(j = 0; j < m.cols; j++){
// rows += m[i][j];
// cols += m[i][j];
// }
// }
// }



Vector::Vector(double *d,int row):Matris(d,row,1)  {
                    int i,sum=0;
                    for(i=0; i<row; i++) {
                              sum+=d[i]*d[i];
                    }
                    this->norm=sqrt(sum);
}
Vector::~Vector() {
          cout<<"Vector has been deleted"<<endl;
}
void matrisDoldur(Matris *m){
// double *entries = (double *) malloc((m->getCols() * m->getRows()) * sizeof(double));
// int i, j;
// for(i = 0; i < m->getEntires(); i++) {
// m[i] = rand()%10;
// }
};

