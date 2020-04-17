#include <iostream>

using namespace std;

int main(){
  
     int angka = 45;

     int *angkax;

     angkax = &angka;

     cout<<"Nilai (isi) dari variabel angka : "<<angka;
     cout<<"\nAlamat variabel angka (&angka) : "<<&angka;
     cout<<"\nNilai yang ditunjuk pointer *angkax : "<<*angkax;

     return 0;
}
