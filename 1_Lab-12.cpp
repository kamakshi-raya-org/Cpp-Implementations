#include<iostream>
using namespace std;
class ComplexNum {
   private:
   int real, imag;
   public:
   ComplexNum(int r = 0, int i =0) {
      real = r;
      imag = i;
   }
   ComplexNum operator - (ComplexNum const &obj1) {
      ComplexNum obj2;
      obj2.real = real - obj1.real;
      obj2.imag = imag - obj1.imag;
      return obj2;
   }
    ComplexNum operator + (ComplexNum const &obj1) {
      ComplexNum obj3;
      obj3.real = real + obj1.real;
      obj3.imag = imag + obj1.imag;
      return obj3;
   }
   void print() {
      if(imag>=0)
      cout << real << "+" << imag << "i"<<endl;
      else
      cout << real << "+(" << imag <<")i"<<endl;
   }
};
int main() {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
   ComplexNum comp1(a,b), comp2(c,d);
    cout << "Input Values:"<<endl;
   comp1.print();
   comp2.print();
    ComplexNum comp3 = comp1 + comp2;
    cout << "Result:"<<endl;
   comp3.print();
   ComplexNum comp4 = comp1 - comp2;
   comp4.print();
}
