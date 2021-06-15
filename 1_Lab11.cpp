#include <iostream>
using namespace std;
class basic {
   public:
      void setroll(int w) {
         r= w;
      }
      void setmath(int h) {
         m = h;
      }
      void setscience(int w) {
         s= w;
      }
   protected:
      int r;
      int m;
      int s;
};
class sport {
   public:
      void setsports(int w) {
         sp = w;
      }
   protected:
      int sp;
};
class total: public sport, public basic {
   public:
      int getroll() {
         return r;
      }
      int totalmarks(){
          return m+s+sp;
      }
      int avgmarks(){
          return (m+s+sp)/3;
      }
      
};

int main(void) {
     total t;
     int r,m,s,sp;
     cin >> r;
     cin >> m;
     cin >> s;
     cin >> sp;
    t.setroll(r);
    t.setmath(m);
    t.setscience(s);
    t.setsports(sp);
   cout << "Roll No: " << t.getroll() << endl;
    cout << "Total marks: " << t.totalmarks() << endl;
    cout << "Average marks: " << t.avgmarks() << endl;

   
   return 0;
}
