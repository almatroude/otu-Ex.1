#include <iostream>
using namespace std;
int main()
{
    int number_one;
    int number_two;
    int number_three;
    cout << "please the first number ";
    cin >> number_one;
    cout << "please enter the second number ";
    cin >> number_two;
    cout << "please enter the third number ";
    cin >> number_three;
    if (number_one > number_two && number_one > number_three)
    {
        cout << number_one << " is greater than " << number_two << "and " << number_three << endl;
    }
    else if (number_two > number_one && number_two > number_three)
    {
        cout << number_two << " is greater than " << number_one << " and " << number_three << endl;
    }
    else if (number_three > number_one && number_three > number_two)
    {
        cout << number_three << " is greater than " << number_one << " and " << number_two << endl;
    }
    else if (number_one == number_two == number_three)
    {
        cout << number_one << " = " << number_two << " = " << number_three << endl;
    }

    return 0;
}