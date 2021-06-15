/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int b,da,hra,g;
    cout<<"Enter the basic salary : ";
    cin>>b;
    cout<<"Enter the DA% : ";
    cin>>da;
    cout<<"Enter the HRA% : ";
    cin>>hra;
    g=b+(b*da/100)+(b*hra/100);
    cout<<"Gross Salary = "<<g;
    getch();
}
