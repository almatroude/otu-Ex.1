#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    float weight;
    double salary;
    char bloodgroup;
    bool status;
    cout<< "please enter your name: ";
    getline(cin , name);
    cout<<"please enter your age:";
    cin>> age;
    cout<< "enter your monthly salary:";
    cin>>salary;
    cout<<"enter your blood group:";
    cin>> bloodgroup;
    cout<< "are you married: ";
    
    cin>> status;
    cout<<" my name is " << name << endl;
    cout<<" iam "<< age << "years old" <<endl;
    cout<<" my mounthly salary is " << salary <<endl;
    cout<<" my bloodgroup is " << bloodgroup <<endl;
    cout<< status << endl;
}