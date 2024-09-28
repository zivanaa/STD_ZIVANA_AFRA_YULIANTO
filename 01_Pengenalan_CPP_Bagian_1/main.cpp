//=====UNGUIDED=====

//NOMOR 1
#include <iostream>
using namespace std;

int main() {
    float bilangan1, bilangan2;

    cout << "Masukkan dua bilangan: ";
    cin >> bilangan1 >> bilangan2;

    cout << "Hasil Penjumlahan: " << bilangan1 + bilangan2 << endl;
    cout << "Hasil Pengurangan: " << bilangan1 - bilangan2 << endl;
    cout << "Hasil Perkalian: " << bilangan1 * bilangan2 << endl;
    cout << "Hasil Pembagian: " << bilangan1 / bilangan2 << endl;

    return 0;
}

//NOMOR 2
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

//NOMOR 3
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Input: ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int s = 0; s < n - i; s++)
        {
            cout << "  "; 
        }

        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

//=====TUGAS PENDAHULUAN (TP)=====

//NOMOR 1
#include <iostream>

using namespace std;

int main()
{
    string nama, nim;
    cout << "Siapa nama anda? ";
    getline(cin, nama);
    cout << "Berapa nim anda? ";
    cin >> nim;
    cout << "Nama saya: " << nama << endl;
    cout << "NIM saya: " << nim << endl;
    
}

//NOMOR 2
#include <iostream>

using namespace std;

int main()
{
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;

    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;

    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;

    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;

    hasil1 = bil1 / bil2; // integer division
    cout << hasil1 << endl;

    hasil1 = bil2 / bil1; // integer division
    cout << hasil1 << endl;

    hasil1 = bil1 % bil2; // modulo
    cout << hasil1 << endl;

    hasil1 = bil2 % bil1; // modulo
    cout << hasil1 << endl;

    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;

    return 0;
}

//NOMOR 3
#include <iostream>

using namespace std;

int main()
{
    int bil1 = 2, bil2 = 3, hasil;

    hasil = bil1 > bil2;
    cout << hasil << endl;

    hasil = bil1 >= bil2;
    cout << hasil << endl;

    hasil = bil1 < bil2;
    cout << hasil << endl;

    hasil = bil1 <= bil2;
    cout << hasil << endl;

    hasil = bil1 == bil2;
    cout << hasil << endl;

    hasil = bil1 != bil2;
    cout << hasil << endl;

    return 0;
}

//NOMOR 4
#include <iostream>

using namespace std;

int main()
{
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 && bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 || bil1 < bil2;
    cout << hasil << endl;
    hasil = !(bil1 >= bil2) || bil1 < bil2;
    cout << hasil << endl;
}

//NOMOR 5
#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cin >> nilai;
    if (nilai > 80)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "Bukan A" << endl;
    }
    return 0;
}

//NOMOR 6
#include <iostream>

using namespace std;

int main()
{
    int a, b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++)
    {
        cout << "Bilangan " << bilangan << endl;
    }
    return 0;
}

//NOMOR 7
#include <iostream>

using namespace std;

int main()
{
    int bilangan, asli, jumlah;

    cout << "Masukkan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli)
    {
        if (bilangan % 2 == 0)
        {
            jumlah += bilangan;
        }
        bilangan++;
    }

    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}