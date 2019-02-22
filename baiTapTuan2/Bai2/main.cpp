#include <iostream>
#include "average.h"

using namespace std;

int main()
{
    int soMonHoc;
    double diem[100];
    double heSo[100];
    double tongHeSo = 0;
    cout << "Tong so mon hoc can tinh dtb: ";
    cin >> soMonHoc;
    for(int pos = 0; pos < soMonHoc; pos++) {
        cout << "Diem mon hoc " << pos + 1 << ": " ;
        cin >> diem[pos];
        cout << "He so mon hoc " << pos + 1 << ": ";
        cin >> heSo[pos];
        tongHeSo = tongHeSo + heSo[pos];
        if( diem[pos] < 0 || diem[pos] > 10 || (heSo[pos] != 1 && heSo[pos] != 1.5 && heSo[pos] != 2 && heSo[pos] != 2.5)) {
            cout << "Diem hoac he so khong thoa man";
            return 0;
        }
    }
    cout << "Tong he so: " << tongHeSo << endl;
    cout << "Diem trung binh cua " << soMonHoc << " mon hoc la: " << tinhTongTrungBinh(soMonHoc, diem, heSo, tongHeSo);


}
