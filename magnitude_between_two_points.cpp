#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Ax, Ay, Bx, By, D;

    cout << "Enter x-coordinate for A: ";
    cin >> Ax;

    cout << "Enter y-coordinate for A: ";
    cin >> Ay;

    cout << "Enter x-coordinate for B: ";
    cin >> Bx;

    cout << "Enter y-coordinate for B: ";
    cin >> By;

    D = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    cout << "The distance between A(" << Ax <<  ", " << Ay << ") and "
         << " B(" << Bx << ", " << By << ") is " << D << endl;

    return 0;
}