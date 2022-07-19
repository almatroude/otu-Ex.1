/* write cpp program to calculate sum of all natural 
numbers of which the user has to determine the 
limit of the number he/she want to sum */
#include<iostream>

using namespace std;
int main()
{
    int i=0, n=0, sum=0;

    cout<<" Enter the number you want to sum from 1 upto "<<endl;
    cin>> n;
    for(i=1; i<=n; ++i)
    {
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    return 0;
}