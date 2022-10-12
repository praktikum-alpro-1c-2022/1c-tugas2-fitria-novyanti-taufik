#include <iostream>
using namespace std;

int main(){
    //1/2 * (a+b) * t
    cout << "Menghitung Luas Trapesium" << endl;
    cout << "=========================" << endl;

    double luasTrapesium;
    float b1, b2, t;

    cout << "Masukan b1 = ";
    cin >> b1;

    cout << "Masukan b2 = ";
    cin >> b2;

    cout << "Masukan Tinggi = ";
    cin >> t;

    luasTrapesium = (0.5*(b1+b2)*t);
    cout << "Hasil Luas Trapesium = " << luasTrapesium;

return 0;
}
