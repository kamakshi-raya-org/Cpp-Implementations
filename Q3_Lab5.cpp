#include <iostream>

using namespace std;
int prime_check(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c=c+1;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}

int function(int i,int n){
    int c=0;
    while(n%i==0){
        c=c+1;
        n=n/i;
    }
    if(c!=0){
        cout<<i<<"^"<<c;
    }
    if(n!=1 && c!=0){
        cout<<"*";
    }
    return n;
}

int main()
{
    int n;
    cout<<"Enter number= ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(prime_check(i)==1){
            n=function(i,n);
        }
    }
            
    return 0;
}
