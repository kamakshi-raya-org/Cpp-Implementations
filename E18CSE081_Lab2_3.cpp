/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Enter an integer : ";
    cin>>n;
    if(n<0){
        cout<<"ERROR";
    }
    else{
        for (int i=1;i<=n;++i) {
            f*=i;   
        }
        cout<<f;
    }
    getch();
}
