#include "lal.h"
#include <iostream>


class Matris{

	public:
		double *entries;
		int rows;
		int cols;
		
	Matris::Matris(double *e, int r,int c){
	this->entries = e; 
	this->rows = r;
	this->cols = c;
	};
	
	~Matris(){};	
	
	void print(void){
		int i,j;
		for(i = 0; i<this.rows; i++){
		for(j = 0; j < this.cols; j++){
			cout << this.entries[i][j] << endl;
		}
		}
	}
	

	Matris::operator+(Matris m){
		int i,j;
		for(i = 0; i < m.rows; i++){
			for(j = 0; j < m.cols; j++){
				rows += m[i][j];
				cols += m[i][j];
			}
		}
	}
	Matris::operator-(Matris m){
			int i,j;
		for(i = 0; i < m.rows; i++){
			for(j = 0; j < m.cols; j++){
				rows -= m[i][j];
				cols -= m[i][j];
			}
		}
	}
	Matris::operator*(Matris m){
	    int i,j;
		for(i = 0; i < m.rows; i++){
			for(j = 0; j < m.cols; j++){
				rows *= m[i][j];
				cols *= m[i][j];
			}
		}
	}
	Matris::operator==(Matris m){
		int i,j;
		for(i = 0; i < m.rows; i++){
			for(j = 0; j < m.cols; j++){
				rows += m[i][j];
				cols += m[i][j];
			}
		}
	}
	
	
	
};
class Vektor: public Matris{

	
	public:
		double norm;
	 Vektor(double *d, int rows): Matris{d,rows};
     
     
	 ~Vektor(){};
	 void print(void){
	 	int i;
	 	for(i = 0; i < rows; i++){
	 		cout << (d[i]) << endl;
		 }
	 }	 
};
void matrisDoldur(Matris *m){
	int i, j;
	for(i = 0; i < m.rows; i++) {
		for(j = 0; j < m.cols; j++){
			m[i][j] = rand()%3;
		}
	}
};
