#include <iostream>
using namespace std;

int main(){
    //Rumus 1/2 * a * t
    cout << "Menghitung Luas Segitiga" << endl;
    cout << "========================" << endl;

    float luasSegitiga, a , t;

     cout << "Masukan Alas = ";
     cin >> a;

     cout << "Masukan Tinggi = ";
     cin >> t;

     int segitiga = 0.5 * a * t;
     cout << "Hasil = " << segitiga;

return 0;

}
