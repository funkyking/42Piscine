#include<iostream>
using namespace std;
int main(){
    string first_name, last_name;

    cout<<"Enter first name : ";
    cin>>first_name;
    cout<<"Enter last name : ";
    cin>>last_name;

    cout<<"Your full name is : "<<first_name + last_name;

    return 0;
}