#include <vector>

std::vector<int> CreateBoard(){
  std::vector<int> board;
  // output "-" for 0, X for 1, and O for 2
  for (int i=0; i<9; i++){
    board.push_back(0);
  }
  return board;
}

int main(){
  std::vector<int> test = CreateBoard();
}
