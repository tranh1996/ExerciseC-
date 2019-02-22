#include <iostream>
#include <stdlib.h>
#include "caculator.h"
using namespace std;

int main()
{
    int num1, num2;
    char op;
    while(true) {
        cin >> num1;
        if(num1 == -1) break;
        cin >> op >> num2;
        switch (op) {
        case '+':
            cout << "Sum = " << sum(num1, num2) <<endl;
            break;

        case '-':
            cout <<  "Subtract = " << subtract(num1, num2) <<endl;
            break;

         case '*':
            cout <<  "Multiple = " << multiple(num1, num2) <<endl;
            break;

         case '/':
            if(num2 == 0) {
                cout << "Invalid divisor";
                exit(0);
            } else {
                 cout <<  "Divide = " << divide(num1, num2) <<endl;
                break;
            }

        }
    }
    exit(0);
    return 0;
}
