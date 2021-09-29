// Vvasilisa.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, A, B, C, P, p, S;
    cin >> a >> b >> c >> d >> e >> f;
    A = sqrt((c - a) * (c - a) + (d - b) * (d - b));
    C = sqrt((e - a) * (e - a) + (f - b) * (f - b));
    B = sqrt((e - c) * (e - c) + (f - d)* (f - d));
    P = A + B + C;
    p = P / 2;
    S = sqrt(p * (p - A) * (p - B) * (p - C));
    cout << "P = " << P << " S =  " <<  S;







}
















