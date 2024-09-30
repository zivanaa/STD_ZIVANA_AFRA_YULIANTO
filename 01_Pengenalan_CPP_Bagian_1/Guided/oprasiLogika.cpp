#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    bool kondisi1 = true;
    bool konsidi2 = true;

    bool hasil = (kondisi1 && konsidi2);
    cout << "hasilnya :" << boolalpha << hasil << endl;

    bool kondisi3 = false;
    bool hasil = !kondisi3;
    cout << "hasilnya : " << boolalpha << endl;
}