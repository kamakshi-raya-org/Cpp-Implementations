#include <iostream>

using namespace std;

int main(){
int n;
cout<<"enter the number of problems"<<endl;
cin>>n;
int def[n];
int mark[n];

for(int i=0;i<n;i++){
    cout<<"enter def \n";
    cin>>def[i];
    cout<<"enter marks \n";
    cin>>mark[i];
}
int n1;
cout<<"enter number of students \n";
cin>>n1;
int stud[n1];
for(int i=0;i<n1;i++){
    cin>>stud[i];
}
int *sp=stud;

int fsum=0;
for(int i=0;i<n1;i++){
    int topmark=0;
    int *dp=def;
    int *mp=mark;
    for(int j=0;j<n;j++){
        if(*dp<=*sp){
            if(*mp>topmark){
                topmark=*mp;
            }
        }
        ++dp;
        ++mp;
    }
    cout<<topmark<<endl;
    ++sp;
    fsum=fsum+topmark;
}

cout<<"final score "<<fsum;
}
