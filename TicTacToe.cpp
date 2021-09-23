#include <vector>
#include <iostream>

//displays board
void DisplayBoard(std::vector<int> a){
  for(int i=0;i<3;i++){
    //if zero output blank
    if (a[i] == 0){
      std::cout << " " ;
    }
    else{
      std::cout << a[i];
    }

    if (i<2){
      std::cout << "|";
    }
    else{
      std::cout << "  0|1|2" << std::endl;
    }
  }
  std::cout << "-----  -----" << std::endl;
  for(int i=3;i<6;i++){
    //if zero output blank
    if (a[i] == 0){
      std::cout << " " ;
    }
    else{
      std::cout << a[i];
    }

    if (i<5){
      std::cout << "|";
    }
    else{
      std::cout << "  3|4|5" << std::endl;
    }
  }
  std::cout << "-----  -----" << std::endl;
  for(int i=6;i<9;i++){
    //if zero output blank
    if (a[i] == 0){
      std::cout << " " ;
    }
    else{
      std::cout << a[i];
    }

    if (i<8){
      std::cout << "|";
    }
    else{
      std::cout << "  6|7|8" << std::endl;
    }
  }
}

std::vector<int> CreateBoard(){
  std::vector<int> board;
  for (int i=0; i<9; i++){
    board.push_back(0);
  }
  return board;
}

int main(){
  std::vector<int> test = CreateBoard();
  DisplayBoard(test);
}
