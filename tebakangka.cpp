
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int angka, tebakan;

    srand(time(0));
    angka = rand() % 10 + 1;

    cout << "===== GAME TEBAK ANGKA =====" << endl;
    cout << "Tebak angka dari 1 sampai 10!" << endl;

    cout << "Masukkan tebakan: ";
    cin >> tebakan;

    if (tebakan == angka) {
        cout << "Selamat! Tebakan kamu benar!" << endl;
    } else {
        cout << "Yah, belum tepat!" << endl;
        cout << "Angka yang benar adalah " << angka << endl;
    }

    return 0;
}
