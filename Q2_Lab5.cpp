#include <iostream>
#include <cmath>

using namespace std;
double area(double a,double b,double c){
    double s=(a+b+c)/2;
    double ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

double area(double l,double b){
    double a=l*b;
    return a;
}

double area(double r){
    double a=4 * 3.14* r *r;
    return a;
}

int main()
{
    int ch;
    double a,b,c;
    double l,r;
    cout<<"Which shape Area You want"<<endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Sphere"<<endl;
    cout<<" Enter your Choice= ";
    cin>>ch;
    
    if(ch==1){
        cout<<"Enter side a= ";
        cin>>a;
        cout<<"Enter side b= ";
        cin>>b;
        cout<<"Enter side c= ";
        cin>>c;
        cout<<area(a,b,c);
        
    }
    else if(ch==2){
        cout<<"Enter length= ";
        cin>>l;
        cout<<"Enter breadth= ";
        cin>>b;
        cout<<area(l,b);
        
    }
    
    else if(ch==3){
        cout<<"Enter radius= ";
        cin>>r;
        cout<<area(r);
        
    }
    
    else{
        cout<<"Invalid input";
    }
    
        
    return 0;
}
