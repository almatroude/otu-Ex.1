#include <iostream>
using namespace std;
int main()
{
    int number_1;
    int number_2;
    cout << "please enter the first number ";
    cin >> number_1;
    cout << "please enter second number ";
    cin >> number_2;

    int add = number_1 + number_2;

    int subtract = number_1 - number_2;
    int multiply = number_1 * number_2;
    double division = number_1 / number_2;
    cout << "the sum of the numbers is: " << add << endl;
    cout << "the difference of the two numbers is: " << subtract << endl;
    cout << "the product of the two numbers are: " << multiply << endl;
    cout << "the divission of the two numbers is: " << division << endl;

    return 0;
}