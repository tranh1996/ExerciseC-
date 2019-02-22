#include <iostream>
#include "CaculatorDate.h"
using namespace std;

int main()
{
    int date;
    int month;
    int year;
    int nextMonth;
    int nextYear;
    cin >> date >> month >> year;
    if (date > 31 || date < 0 || month > 12 || month < 0 || year < 0) {
        cout << "Nhap sai du lieu" ;
        return 0;
    }
    int dayArr[100];
    int k;
    int i = 0;
    while (k != 0) {
        cin >> k;
        dayArr[i] = date + k;
        i++;
    }
    for (int pos = 0; pos < i - 1; pos ++) {
        if ((dayArr[pos] > 0) && (dayArr[pos] < 29)) {
            cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
        }

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 && dayArr[pos] > 31 )  {
            while(dayArr[pos] > 31){
                dayArr[pos] -= 31;
                month += 1;
                if(dayArr[pos] <= 31) {
                    cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                }
            }
            month -= 1;
        }

        if (month == 4 || month == 6 || month == 9 || month == 11 && dayArr[pos] > 30)  {
            while(dayArr[pos] > 30){
                dayArr[pos] -= 30;
                month += 1;
                if(dayArr[pos] <= 30) {
                    cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                }
            }
            month -= 1;
        }

        if (month == 2 && kiemTraNamNhuan(year) == true && dayArr[pos] > 29)  {

            while(dayArr[pos] > 29){
                dayArr[pos] -=29;
                month += 1;
                if(dayArr[pos] <= 29) {
                    cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                }
            }
            month -= 1;
        }

        if (month == 2 && kiemTraNamNhuan(year) == false && dayArr[pos] > 28)  {
            while(dayArr[pos] > 28){
                dayArr[pos] -=28;
                month += 1;
                if(dayArr[pos] <= 28) {
                    cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                }
            }
            month -= 1;
        }

        if (month == 12 && dayArr[pos] > 31 ) {
                dayArr[pos] -= 31;
                month = 1;
                year += 1;
                if(dayArr[pos] <= 31) {
                        cout << month;
                    cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                } else {
                    month = month - 1;
                    dayArr[pos] -= 31;
                    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 && dayArr[pos] > 31 )  {
                        while(dayArr[pos] > 31){
                            dayArr[pos] -= 31;
                            month += 1;
                            if(dayArr[pos] <= 31) {
                                cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                            }
                        }
                        month -= 1;
                    }

                    if (month == 4 || month == 6 || month == 9 || month == 11 && dayArr[pos] > 30)  {
                        while(dayArr[pos] > 30){
                            dayArr[pos] -= 30;
                            nextMonth = month + 1;
                            if(dayArr[pos] <= 30) {
                                cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(nextMonth) << " " << year << endl;
                            }
                        }
                        month -= 1;
                    }

                    if (month == 2 && kiemTraNamNhuan(year) == true && dayArr[pos] > 29)  {

                        while(dayArr[pos] > 29){
                            dayArr[pos] -=29;
                            month += 1;
                            if(dayArr[pos] <= 29) {

                                cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                            }

                        }
                        month -= 1;
                    }

                    if (month == 2 && kiemTraNamNhuan(year) == false && dayArr[pos] > 28)  {
                        while(dayArr[pos] > 28){
                            dayArr[pos] -=28;
                            month += 1;
                            if(dayArr[pos] <= 28) {
                                cout << dayArr[pos] << " " << chuyenThangThanhTiengAnh(month) << " " << year << endl;
                            }
                        }
                        month -= 1;
                    }

                }
        }


    }

}
