#include <iostream>
using namespace std;

int main()
{
    float bilangan1, bilangan2;

    cout << "Masukkan dua bilangan: ";
    cin >> bilangan1 >> bilangan2;

    cout << "Hasil Penjumlahan: " << bilangan1 + bilangan2 << endl;
    cout << "Hasil Pengurangan: " << bilangan1 - bilangan2 << endl;
    cout << "Hasil Perkalian: " << bilangan1 * bilangan2 << endl;
    cout << "Hasil Pembagian: " << bilangan1 / bilangan2 << endl;

    return 0;
}