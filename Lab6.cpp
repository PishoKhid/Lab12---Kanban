#include <iomanip>
#include <iostream>
#include "windows.h"
#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    {
        //Завдання 1
        cout << "\tЗавдання 1" << endl;
        float a, b, c, x;
        double f;
        cout << "Введіть a, b, c, x\n";
        cin >> a >> b >> c >> x;
        if (a < 0 || c != 0)
            f = a * pow(x, 2) + sqrt(x) + c;
        else if (a > 0 && c == 0)
            f = (x - a) / (-c);
        else
            f = x + c / a;
        cout << "F = " << setprecision(2) << f << endl;
    }
    {
        //Завдання 2
   cout << "\tЗавдання 2" << endl;
        int n;
        cout << "Введіть кількість завдань (10-40): ";
        cin >> n;
        if (n < 10 || n > 40) {
            cout << "Число повинно бути в діапазоні 10-40!" << endl;
            return 1;
        }
        string result;
        int tens = n / 10;   
        int units = n % 10;  

        switch (tens) {
        case 1: // 10-19
            switch (units) {
            case 0: result = "десять"; break;
            case 1: result = "одинадцять"; break;
            case 2: result = "дванадцять"; break;
            case 3: result = "тринадцять"; break;
            case 4: result = "чотирнадцять"; break;
            case 5: result = "п'ятнадцять"; break;
            case 6: result = "шістнадцять"; break;
            case 7: result = "сімнадцять"; break;
            case 8: result = "вісімнадцять"; break;
            case 9: result = "дев'ятнадцять"; break;
            }
            break;

        case 2: // 20-29
            result = "двадцять";
            break;
        case 3: // 30-39
            result = "тридцять";
            break;
        case 4: // 40
            result = "сорок";
            break;
        }

        // Додаємо одиниці (для чисел 20-40)
        if (tens >= 2 && units != 0) {
            result += " ";
            switch (units) {
            case 1: result += "одне"; break;  
            case 2: result += "два"; break;
            case 3: result += "три"; break;
            case 4: result += "чотири"; break;
            case 5: result += "п'ять"; break;
            case 6: result += "шість"; break;
            case 7: result += "сім"; break;
            case 8: result += "вісім"; break;
            case 9: result += "дев'ять"; break;
            }
        }

        string form;
        if (units == 1 && tens != 1) {          // 21, 31
            form = " навчальне завдання";
        }
        else if (units >= 2 && units <= 4 && tens != 1) {  // 22-24, 32-34
            form = " навчальні завдання";
        }
        else {                                  // усі інші випадки (10-20, 25-30, 35-40)
            form = " навчальних завдань";
        }

        cout << n << " – \"" << result << form << "\"" << endl;
    }
}
