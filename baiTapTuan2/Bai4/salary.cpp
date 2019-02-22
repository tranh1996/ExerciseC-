#include "salary.h"

int tinhLuongPhanA(int hour)
{
    if (hour <= 100) {
        return hour * 12000;
    }
    if (hour > 100 && hour <= 150){
        return 100 * 12000 + (hour-100)*16000;
    }
    if (hour > 150 && hour <= 200){
        return 100 * 12000 + 50*16000 + (hour - 150)*20000;
    } else {
        return 100 * 12000 + 50*16000 + 50 * 20000 + (hour - 200)*25000;
    }
}

double tinhLuongPhanB(double luong)
{
    double baoHiem;
    double thue;
    baoHiem = luong*0.09;
    if (luong <= 1000000) {
        return luong - baoHiem;
    }
    if (luong > 1000000 && luong <= 1500000) {
        thue = (luong - 1000000 - baoHiem)*0.1;
        return luong - thue - baoHiem;
    }
    if (luong > 1500000 && luong <= 2000000) {
        thue = (luong - 1500000 - baoHiem)*0.15 + 500000*0.1;
        return luong - thue - baoHiem;
    } else {
        thue = (luong - 2000000 - baoHiem)*0.2 + 500000*0.1 + 500000*0.15;
        return luong - thue - baoHiem;;
    }
}

double tinhTongDuNoPhanC(double luong, int soThang){
    for (int i = 1; i <= soThang; i++){
        luong = luong + luong*0.02;
    }
    return luong;
 }
