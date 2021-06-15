#include <iostream>
using namespace std;
class area {
   public:
      float Area(float r){
          return 3.142*r*r;
      }
      int Area(int s){
          return s*s;
      }
      int Area(int l, int b){
          return l*b;
      }
      int Area(int l, int w, int h){
          return 2*l*w+2*l*h+2*h*w;
      }
};
int main(void) {
     area a;
    float r;
     int l,b,s,cl,cw,ch;
     cin >> r;
    cin >> s;
     cin >> l;
     cin >> b;
    cin >> cl;
    cin >> cw;
    cin >> ch;
   cout << "Area of the Circle is: " << a.Area(r) << "sq.units"<<endl;
    cout << "Area of the Square is: " << a.Area(s) << "sq.units"<< endl;
    cout << "Area of the Rectangle is: " << a.Area(l,b) << "sq.units"<< endl;
    cout << "Area of the cuboid is: " << a.Area(cl,cw,ch) << "sq.units"<< endl;

   
   return 0;
}
