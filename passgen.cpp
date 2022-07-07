#include<iostream>
#include<time.h>
using namespace std;
int main(){
srand(time(0));
int l;
string pass;
string data ="abcdefghijklmnopqrstuvwxyz"
             "1234567890"
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "~`!@#$%^&*()-_+={}[]<>.,?/'";

cout <<"\n"<<"Enter the length of the password you want to generate: "; 
cin>>l;
for (int i=0;i<l;i++){
    pass = pass + data[rand() % 93];

}

cout<<"\n"<<"generated password: "<<pass;

    return 0;
}