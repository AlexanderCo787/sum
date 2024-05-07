
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "введите число 1: ";
    int n;
    cin >> n;
    cout << "введите число 2: ";
    int n1;
    cin >> n1;

    n = n + n1;

    cout << "сумма двух чисел: " << n;
    return 0;
}


