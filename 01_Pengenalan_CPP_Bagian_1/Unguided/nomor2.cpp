#include <iostream>
#include <string>

using namespace std;

string angkaKeTeks(int angka)
{
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan",
                       "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas",
                       "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh",
                        "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 20)
    {
        return satuan[angka];
    }
    else if (angka < 100)
    {
        int puluh = angka / 10;
        int sisa = angka % 10;
        if (sisa == 0)
        {
            return puluhan[puluh];
        }
        else
        {
            return puluhan[puluh] + " " + satuan[sisa];
        }
    }
    else if (angka == 100)
    {
        return "seratus";
    }

    return "";
}

int main()
{
    int angka;

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka < 0 || angka > 100)
    {
        cout << "Input tidak valid. Masukkan angka antara 0 hingga 100." << endl;
    }
    else
    {
        cout << "Angka dalam teks: " << angkaKeTeks(angka) << endl;
    }

    return 0;
}