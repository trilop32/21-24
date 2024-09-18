#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //задание 3
    /*double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник с такими сторонами не существует!" << endl;
        return 1;
    }
    double angleA = acos((b * b + c * c - a * a) / (2 * b * c));
    double angleB = acos((a * a + c * c - b * b) / (2 * a * c));
    double angleC = acos((a * a + b * b - c * c) / (2 * a * b));
    int degreesA, minutesA, degreesB, minutesB, degreesC, minutesC;
    double secondsA, secondsB, secondsC;
    degreesA = angleA * 180 / 3.14;
    double fractionalPart = angleA * 180 / 3.14 - degreesA;
    minutesA = fractionalPart * 60;
    secondsA = (fractionalPart * 60 - minutesA) * 60;

    degreesB = angleB * 180 / 3.14;
    double fractionalPart2 = angleB * 180 / 3.14 - degreesB;
    minutesB = fractionalPart2 * 60;
    secondsB = (fractionalPart2 * 60 - minutesB) * 60;
    degreesC = angleC * 180 / 3.14;
    double fractionalPart3 = angleC * 180 / 3.14 - degreesC;
    minutesC = fractionalPart3 * 60;
    secondsC = (fractionalPart3 * 60 - minutesC) * 60;
    cout << fixed << setprecision(2);
    cout << "Радиан A: " << angleA << "; Градусов: " << degreesA << "; Минут: " << minutesA << "; Секунд: " << secondsA << endl;
    cout << "Радиан B: " << angleB << "; Градусов: " << degreesB << "; Минут: " << minutesB << "; Секунд: " << secondsB << endl;
    cout << "Радиан C: " << angleC << "; Градусов: " << degreesC << "; Минут: " << minutesC << "; Секунд: " << secondsC << endl;*/
    
    //Задание 4
    /*int number, count = 0;
    cin >> number;
    if (number >= 100000 && number <= 999999) {
        for (int i = 0; i < 6; i++) {
            int digit = number % 10;
            number /= 10;
            if (digit % 3 == 0) {
                count++;                
            }
        }
        cout << "Количество цифр, кратных 3: " << count << endl;
    }
    else {
        cout << "Введенное число не является шестизначным." <<endl;
    }*/

    //задание 5
    double a,c,d;
    /*cin >> a;
    c = pow(a, 2);
    d = pow(a, 3);
    cout<< a<<" " << c << " " << d;*/
    cin >> c;
    cin >> d;
    double a1 = pow(c, 1.0 / 3.0);
    double a2 = pow(d, 1.0 / 2.0);
    if (a1 == a2) {
        cout << a1;
    }
    double a3 = pow(d, 1.0 / 3.0);
    double a4 = pow(c, 1.0 / 2.0);    
    if (a3 == a4) {
        cout << a3;
    }
    
}