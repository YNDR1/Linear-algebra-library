#define lal_h_
#include <iostream>

using namespace std;



class Matris{
	
	public:
		double *entries;
		int rows;
		int cols;
	Matris(double *, int,int);
	~Matris();
	void print(void);
	Matris operator+(Matris);
	Matris operator-(Matris);
	Matris operator*(Matris);
	Matris operator==(Matris);
	
	};


class Vektor: public Matris{

	public:
	double norm;
	 Vektor(double *, int,int);
	 ~Vektor();
	 void print(void);
	 };
	 

void matrisDoldur(Matris *);

 
