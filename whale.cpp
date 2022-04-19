#include <iostream>
#include <vector>
#include <string>

int main() {

  // Whale, whale, whale.
  // What have we got here?

  std::string input;
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> whale_talk;

  std::cin >> input;

  for (int i = 0; i < input.size(); i++){
    for (int v = 0; v < vowels.size(); v++){
      if (input[i] == vowels[v]){
        whale_talk.push_back(input[i]);
        if (input[i] == 'e' || input [i] == 'u') {

        whale_talk.push_back(input[i]);
        
        }       
      }
    }
  }
  for (int k = 0; k < whale_talk.size(); k++){
    std::cout << whale_talk[k];
    return 0
  }
}