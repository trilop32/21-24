﻿#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void radiansToDMS(double radians, int& degrees, int& minutes, double& seconds) {
    degrees = static_cast<int>(radians * 180 / 3.14);
    double fractionalPart = radians * 180 / 3.14 - degrees;
    minutes = static_cast<int>(fractionalPart * 60);
    seconds = (fractionalPart * 60 - minutes) * 60;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
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
    cout << "Радиан C: " << angleC << "; Градусов: " << degreesC << "; Минут: " << minutesC << "; Секунд: " << secondsC << endl;
}