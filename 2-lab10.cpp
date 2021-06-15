#include <iostream>
using namespace std;
class Number {
   protected:
      int x;
      int y;
   public:
       void setX(int num) {
         x=num;
      }
   public:
       void setY(int num) {
         y=num;
      }
};
class Cube: public Number {
   public:
      int getCube() {
         return (y*y*y);
      }
};
class Square: public Number {
   public:
      int getSquare() {
         return (x*x);
      }
};

int main(void) {
    Cube c;
    Square s;
    int x;
    int y;
    cin>>x;
    cin>>y;
    c.setY(y);
    s.setX(x);
    cout << "Square is: " <<s.getSquare() << endl;
    cout << "Cube is: " <<c.getCube()<< endl;

   return 0;
}
