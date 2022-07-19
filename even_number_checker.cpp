#include<iostream>
using namespace std;
int main (){
    int number;
    cout<< "please Enter any number: ";
    cin>> number;
    if(number % 2 == 0){
     cout<< number <<" "<< "is an even number"<<endl;
    }
    else{
        cout<< number << " "<< "is not an even number"<<endl;
    }
    return 0;
}