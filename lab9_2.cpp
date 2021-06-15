#include <iostream>
using namespace std;
class Rectangle{
    public:
    double x;
    double y;
    int width;
    int height;
    Rectangle(){
        x=0.0;
        y=0.0;
        width=1;
        height=1;
    }
    Rectangle(double xord, double yord, int heightt, int widthh){
        x=xord;
        y=yord;
        width=widthh;
        height=heightt;
    }
    int getArea(){
        return height*width;
    }
    int getPerimeter(){
        return 2*(height+width);
    }
    string contains(double px, double py){
        if(px>=x-(width/2.0) && px<=x+(width/2.0) && py>=y-(height/2.0) && height!=0 && width!=0 && py<=y+(height/2.0)){
            return "true";
        }
        else{
            return "false";
        }
    }
};
int main() {
    double px;
    double py;
    Rectangle r1=Rectangle();
    Rectangle r;
    cin>>r.x;
    cin>>r.y;
    cin>>r.height;
    cin>>r.width;
    cin>>px;
    cin>>py;
    cout<<r1.getPerimeter();
    cout<<"\n";
    cout<<r1.getArea();
    cout<<"\n";
    cout<<r1.contains(0.5,0.1);
    cout<<"\n";
    cout<<r.getPerimeter();
    cout<<"\n";
    cout<<r.getArea();
    cout<<"\n";
    cout<<r.contains(px,py);
}

