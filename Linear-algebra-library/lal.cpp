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
	

	Matris operator+(Matris m){
		int i,j;
		for(i = 0; i < m.rows; i++){
			for(j = 0; j < m.cols; j++){
				rows += m[i][j];
				cols += m[i][j];
			}
		}
	}
	Matris operator-(Matris);
	Matris operator*(Matris);
	Matris operator==(Matris);
	
	
	
};
class Vektor: public Matris{

	
	public:
		double norm;
	 Vektor(double *, int){};
     void setnorm(){
     	int i; 
		 for(i = 0; i<col; i++){
		 	this.norm +=  
		 }
     	this->norm = this.
	 }
	 
	 ~Vektor(){};
	 void print(void){
	 	
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

