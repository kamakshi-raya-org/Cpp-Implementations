/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/
#include<iostream>
#include <cmath>
#include<conio.h>
using namespace std;
int main(){
    double r1,r2,a1,a2,r3;
    const double pi = 3.14159265358979323846;
    cout<<"Enter the radius r1 : ";
    cin>>r1;
    cout<<"Enter the radius r2 : ";
    cin>>r2;
    a1=pi*r1*r1;
    a2=pi*r2*r2;
    r3=sqrt((a1+a2)/pi);
    cout<<"AC1="<<a1;
    cout<<"  AC2="<<a2;
    cout<<"  r3="<<r3;
    getch();
}

