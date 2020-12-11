#include <iostream>
using namespace std;
int main()
{
    int number_one;
    int number_two;
    cout << "please the first number ";
    cin >> number_one;
    cout << "please enter the second number ";
    cin >> number_two;
    if (number_one > number_two)
    {
        cout << number_one << " is greater than " << number_two << endl;
    }
    else if (number_two > number_one)
    {
        cout << number_two << " is greater than " << number_one << endl;
    }
    else if (number_one == number_two)
    {
        cout << number_one << "is equal " << number_two << endl;
    }

    return 0;
}