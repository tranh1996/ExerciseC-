#include "average.h"

double tinhTongTrungBinh( int soMonHoc, double diem[100], double heSo[100], double tongHeSo) {
    double tongDiem = 0;
    for (int pos = 0; pos < soMonHoc; pos++) {
        tongDiem = tongDiem + diem[pos]*heSo[pos];
    }
    return tongDiem/tongHeSo;
}
