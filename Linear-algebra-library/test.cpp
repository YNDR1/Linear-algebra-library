#include "lal.h"
#include<iostream>
#include "math.h"
#include<stdbool.h>
#include"time.h"

using namespace std;
int main(){

double boyut = 0;
int row;
int col;
cout << "Tek boyutlu matris için boyut giriniz" << endl;
cin>> boyut;
cout<< "Matrisin satir sayisini giriniz : " << endl;
cin>> row;
cout<< "Matrisin sutun sayisini giriniz : " << endl;
cin>> col;

double *entries;
entries = &boyut;
Matris m(entries,row,col);
m.matrisDoldur(boyut);
m.print();

cout << "2 . matris için  boyut giriniz" << endl;
cin>> boyut;
cout<< "2. Matrisin satir sayisini giriniz : " << endl;
cin>> row;
cout<< "2. Matrisin sutun sayisini giriniz : " << endl;
cin>> col;
entries = &boyut;

Matris m2(entries,row,col);
m2.matrisDoldur(boyut);
m2.print();
Matris m3 = m + m2;
Matris m4 = m-m2;
Matris m5 = m*m2;
m3.print();

cout << "toplanmis matris m3 yazıldı"<<endl;

m4.print();
cout << "cikarilmis matris m4 yazıldı"<<endl;

m5.print();
cout << "carpilmis matris m4 yazıldı"<<endl;
// -----------------------------------------Madde  12 13 ---------------------------------------------
boyut = 5;
int i;
Vector v1(entries,2);
Vector v2(entries,3);
Vector v3(entries,4);
Vector v4(entries,5);

Vector *vectorArray = (Vector *)(malloc(4 * sizeof(int)));

vectorArray[0] = v1;
vectorArray[1] = v2;
vectorArray[2] = v3;
vectorArray[3] = v4;


cout<<"bitti"<<endl;
}
