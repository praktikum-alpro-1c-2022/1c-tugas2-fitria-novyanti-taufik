#include <iostream>
using namespace std;

int main() {
    //1/2 * d1 * d2
    cout << "Menghitung Luas Layang-layang" << endl;
    cout << "=============================" << endl;

    float luasLL, d1, d2;

    cout << "Masukan diagonal sisi 1 = ";
    cin >> d1;

    cout << "Masukan diagonal sisi 2 = ";
    cin >> d2;

    luasLL = 0.5 * d1 * d2;
    cout << "Hasil = " << luasLL;


return 0;
}
