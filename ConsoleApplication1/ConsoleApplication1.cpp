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
    //double a,c,d;
    ///*cin >> a;
    //c = pow(a, 2);
    //d = pow(a, 3);
    //cout<< a<<" " << c << " " << d;*/
    //cin >> c;
    //cin >> d;
    //double a1 = pow(c, 1.0 / 3.0);
    //double a2 = pow(d, 1.0 / 2.0);
    //if (a1 == a2) {
    //    cout << a1;
    //}
    //double a3 = pow(d, 1.0 / 3.0);
    //double a4 = pow(c, 1.0 / 2.0);    
    //if (a3 == a4) {
    //    cout << a3;
    //}

    //задание 6    
    /*double v1, v2, t1, t2, s1, s2;
    cout << "Cкорость грузовика ";
    cin >> v1;
    cout << "Через сколько часов выехал автомобиль ";
    cin >> t1;
    cout << "Скорость автомобиля ";
    cin >> v2;
    s1 = v1 * t1;
    t2 = 0;
    while (true) {
        s2 = t2*v2;
        if (s2 >= s1) {
            cout << "Легковой автомобиль догнал грузовик через " << t2<< " часа/часов на " << s2 << " келометре.\n";
            break;
        }
        t2 += 1;
        s1 = (t1 + t2)*v1;
    }*/

    //Задание 7
   /* double A, B;
    cin >> A >> B;
    if (A + B > 32767)
        cout << "нужно меньше";
    else{
        cout << A + B;
    }*/
    //Задание 8
    /*int num;
    string f = "";
    float MASS,mass;
    cout << "Введите массу в кг: ";
    cin >> mass;
    cout << "Введите номер единицы измерения:\n";
    cout << "1 - килограмм\n";
    cout << "2 - миллиграмм\n";
    cout << "3 - грамм\n";
    cout << "4 - тонна\n";
    cout << "5 - центнер\n";
    cin >> num;
    switch (num) {
    case 1:
        MASS = mass;
        f = "килограммах";
        break;
    case 2:
        MASS = mass / 1000000;
        f = "миллиграммах";
        break;
    case 3:
        MASS = mass / 1000;
        f = "граммах";
        break;
    case 4:
        MASS = mass*1000;
        f = "тоннах";
        break;
    case 5:
        MASS = mass*100;
        f = "центнерах";
        break;
    default:
        cout << "Неверный номер единицы измерения!\n";
    }
    cout << "Масса в "<<f<<": " << MASS << endl;*/

    //задание 9
    /*double x;
    double res;
    cin >> x;
    res = x - (pow(x, 3) / 1 * 2 * 3)
        + (pow(x, 5) / 1 * 2 * 3 * 4 * 5)
        - (pow(x, 7) / 1 * 2 * 3 * 4 * 5 * 6 * 7)
        + (pow(x, 9) / 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9)
        - (pow(x, 11) / 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 * 11)
        + (pow(x, 13) / 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 * 11 * 12 * 13);
    cout << res;*/

    //задание 10
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    cout << "Числа, делящиеся на каждую свою цифру:" << endl;

    for (int i = 1; i <= n; ++i) {
        int number = i;
        bool divisible = true;

        while (number > 0) {
            int digit = number % 10;
            if (digit == 0 || i % digit != 0) {
                divisible = false;
                break;
            }
            number /= 10;
        }
        if (divisible) {
            cout << i << " ";
        }
    }
    cout << endl;
}