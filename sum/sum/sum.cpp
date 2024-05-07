
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
    cout << "введите число 3: ";
    int n2;
    cin >> n2;

    n = n + n1+n2;

    cout << "сумма чисел: " << n;
    return 0;
}


