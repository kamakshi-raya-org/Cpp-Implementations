/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/
#include <iostream>
#include <vector>

int main(){
  int players;
  int search;
  std::vector<int> tokens;
  char charInput;
  int char_to_bin;
  std::cin >> players;
  std::cin >> search;
  for (int i = 0; i < players; i++){
    std::cin >> charInput;
    if (charInput == 'T'){
      char_to_bin = 0;
      tokens.push_back(char_to_bin);
    }
    else if (charInput == 'S'){
      char_to_bin = 1;
      tokens.push_back(char_to_bin);
    }
  }
  int last_pair = 0;
  int pairs = 0;
  for (auto i : tokens){
    if (last_pair == 0){
      if (i == 0) last_pair = 1;
      if (i == 1) last_pair = -1;
    }
    else if (last_pair == 1){
      if (i == 0) last_pair = 0;
      if (i == 1){
        pairs++;
        last_pair = 0;
      };
    }
    else if (last_pair == -1){
      if (i == 1) last_pair = 0;
      if (i == 0){
        pairs++;
        last_pair = 0;
      };
    }
  }
  std::cout << pairs << std::endl;
  return 0;
}
