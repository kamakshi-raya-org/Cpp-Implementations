/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;
bool primecheck(int n){
    if (n<=1){
           return false;  
        } 
    for (int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,s=0;
    cout<<"Enter an integer : ";
    cin>>n;
    for (int i=2;i<=n;i++) { 
        if(primecheck(i)){
            s+=1;
        } 
    }
    cout<<s;
    getch();
}
