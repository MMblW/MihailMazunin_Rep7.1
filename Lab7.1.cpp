#include <iostream>
#include <cmath>
using namespace std;
int power(int a, int b)
{
    cout << pow(a, b) << " - В степени" << endl;
    return 0;
}
double power(double a, double b)
{
    cout << pow(a, 1/b) << " - Корень" << endl;
    return 0;
}
int main()
{
    int e = 2;
    int f = 2;
    double c = 2;
    double d = 2;
    power(e, f);
    power(c, d);
    return 0;
}
