#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    int c=0;
    int m=0;
    int b;
    cout<<"Enter number of elements in A[]= "<<endl;
    cin>>n1;
    cout<<"Enter number of elements in B[]= "<<endl;
    cin>>n2;
    int A[n1];
    int B[n2];
    int C[n1*n2];
    for(int i=0;i<n1;i++){
        cout<<"Enter element in A= ";
        cin>>A[i];
        cout<<endl;
    }
    for(int i=0;i<n2;i++){
        cout<<"Enter element in B= ";
        cin>>B[i];
        cout<<endl;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            C[c]=A[i]+B[j];
            c=c+1;
        }
    }
    cout<<"Elements in C[]= ";
    for(int i=0;i<n1*n2;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
                
    
    for(int i=0;i<(n1*n2)-1;i++){
        for(int j=i+1;j<n1*n2;j++){
            b=(C[i] ^ C[j]);
            if(b>m){
                m=b;
            }
            
        }
    }
    cout<<"MAXPair= ";
    cout<<b;
    
    return 0;
}

    