#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int tv;
    cout << "daftar chanel :" << endl;
    cout << "1. rcti" << endl;
    cout << "2. indosiar " << endl;

    cout << "masukan chanel : ";
    cin >> tv;

    switch (tv)
    {
    case 1:
        cout << "chanel yang anda pilih rcti" << endl;
        break;
    case 2:
        cout << "chanel yan anda pilih indosiar" << endl;
        break;
    default:
        cout << "chanel tidak tersedia" << endl;
        break;
    }
}