#include <iostream>
using namespace std;
int add(int a , int b)
{
    return a+b;
}
int main()
{
 int (*funcptr)(int,int);
 funcptr=add;
 int sum=funcptr(5,10);
 std::cout << "value of sum is :" <<sum<< std::endl;
  return 0;
}
