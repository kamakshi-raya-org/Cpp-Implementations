/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/
#include <iostream>

int main(){
  int rds, val = 10, amt = 100;
  std::string input;
  std::cin >> rds;
  std::cin >> input;
  for (int i = 0; i < rds; i++){
    int x = (input[i]) - '0';
    if (x == 1){
      amt += val;
      val = 10;
    }
    else if (x == 0){
      amt -= val;
      val *= 2;
    }
  }
  if (amt < 0)
    std::cout << -1 << std::endl;
  else
    std::cout << amt << std::endl;
  return 0;
}
