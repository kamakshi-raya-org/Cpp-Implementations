/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/
#include <iostream>
#include <vector>
int main(){
  int length;
  int hs;
  std::cin >> length;
  std::vector<int> matrix(length);
  for (auto i = matrix.begin(); i != matrix.end(); ++i)
    std::cin >> *i;
  std::cin >> hs;
  int max = -1;
  for (auto i : matrix)
    if (max < i)
      max = i;
  if (max <= hs)
    std::cout << "Yes";
  else
    std::cout << "No";
  std::cout << std::endl;
  return 0;
}

