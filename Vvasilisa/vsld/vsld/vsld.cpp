// vsld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c;
    cin >> x >> y;
        if (((a = x) && (b = y)) || ((a = x) && (c = y)) || ((b = x) && (c = y))) {
            cout << "YES";
            }
        else {
            cout << "NO";
            }
}

