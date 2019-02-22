#include <iostream>
#include "salary.h"
#include <iomanip>

using namespace std;

int main()
{
    //Phan A
    int hour;
    cout << "Nhap so gio lam viec: ";
    cin >> hour;
    if (hour < 0) {
        cout << "Ban nhap sai gia tri.";
        return 0;
    }
    cout << "Luong la: " << tinhLuongPhanA(hour);
    //Phan B
    double luong;
    cout << "Nhap luong = ";
    cin >> luong;
    if (luong < 0) {
        cout << "Ban nhap sai gia tri.";
        return 0;
    }
    cout << "luong sau thue la: "  << tinhLuongPhanB(luong);
    //Phan C
    cout << "Tong du no sau mot nam: "  << fixed << setprecision(0) << tinhTongDuNoPhanC(luong,12) <<endl;

    //Phan D
    double luongSinhVien ;
    luongSinhVien = tinhLuongPhanB(tinhLuongPhanA(155));
    cout << "So tien thu duoc lam them cua sinh vien sau thue "  << fixed << setprecision(0) << luongSinhVien <<endl;
    double tienDu = luongSinhVien + 1500000 - 2000000;
    double Tong1 = 10000000;
    int dem1 = 0;
    cout << "So tien lai thang dau la: " << 10000000*0.02 << endl;
    while (Tong1 > 0) {
        Tong1 = tinhTongDuNoPhanC(Tong1, 1) ;
        Tong1 = Tong1 - tienDu;
        dem1 = dem1++;
        cout << "So tien lai thang " << dem1 + 1 << " la: " << 0.02 * Tong1 <<endl;
        cout << "Tong tien du no sau thang thu " << dem1 << " la: " << Tong1 << endl;
    }
    cout << "So thang tra het no la: " << dem1;
    //Phan E
    double luongSauThueTungThang[12] = {
                                tinhLuongPhanB(tinhLuongPhanA(155)),
                                tinhLuongPhanB(tinhLuongPhanA(145)),
                                tinhLuongPhanB(tinhLuongPhanA(125)),
                                tinhLuongPhanB(tinhLuongPhanA(135)),
                                tinhLuongPhanB(tinhLuongPhanA(100)),
                                tinhLuongPhanB(tinhLuongPhanA(100)),
                                tinhLuongPhanB(tinhLuongPhanA(145)),
                                tinhLuongPhanB(tinhLuongPhanA(135)),
                                tinhLuongPhanB(tinhLuongPhanA(100)),
                                tinhLuongPhanB(tinhLuongPhanA(155)),
                                tinhLuongPhanB(tinhLuongPhanA(170)),
                                tinhLuongPhanB(tinhLuongPhanA(180))
                                };
     double duSauMoiThang[12];
     for (int i = 0; i < 12; i++) {
        duSauMoiThang[i] = luongSauThueTungThang[i] - 500000;
        cout << "Thu nhap sau moi thang tu viec lam them la: " << fixed << setprecision(0) <<luongSauThueTungThang[i] <<endl;
     }
     double Tong2 = 10000000;
     int dem2 = 0;
     double lai = 10000000*0.02;
     cout << "So tien lai thang dau la: " << lai << endl;
     while (Tong2 > 0) {
        Tong2 = tinhTongDuNoPhanC(Tong2, 1) ;
        Tong2 = Tong2 - duSauMoiThang[dem2];
        dem2 = dem2++;
        if (Tong2 > 0) {
            lai = lai + 0.02 * Tong2;
        }
        cout << "So tien lai thang " << dem2 + 1 << " la: " << 0.02 * Tong2 <<endl;
        cout << "Tong tien du no sau thang thu " << dem2 << " la: " << Tong2 << endl;
     }

     cout << "So thang tra het no la: " << dem2 << endl;

     cout << "Tong so tien thanh toan la: " << lai + 10000000;
     return 0;

}
