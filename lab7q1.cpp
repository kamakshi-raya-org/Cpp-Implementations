#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cout<<"enter number of photo frames \n";
    cin>>n;
    string x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    string *y;
    y= &x[0];
    int omt=0;
    for(int i=0;i<n;i++){
        if(*y=="a"){
            cout<<"frame is at ";
            cout<<i<<endl;
            omt=1;
            break;
        }
        y=y+1;
    }if(omt==0){
        cout<<"absent";
    }


}
