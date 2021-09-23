#include <vector>
#include <iostream>

std::vector<int> CreateBoard(){
  std::vector<int> board;
  // output "-" for 0, X for 1, and O for 2
  for (int i=0; i<9; i++){
    board.push_back(0);
  }
  return board;
}

void DisplayBoard(std::vector<int> board){
    for(int i = 0; i < 3; i++){
        if(board.at(i) == 1){
            std::cout << " X ";
        }else if(board.at(i) == 2){
            std::cout << " O ";
        }else{
            std::cout << "   ";
        }

        if(i != 2){
            std::cout << "|";
        }
    }
    std::cout << std::endl << "-----------" << std::endl;

    for(int i = 3; i < 6; i++){
        if(board.at(i) == 1){
            std::cout << " X ";
        }else if(board.at(i) == 2){
            std::cout << " O ";
        }else{
            std::cout << "   ";
        }

        if(i != 5){
            std::cout << "|";
        }
    }
    std::cout << std::endl << "-----------" << std::endl;

    for(int i = 6; i < 9; i++){
        if(board.at(i) == 1){
            std::cout << " X ";
        }else if(board.at(i) == 2){
            std::cout << " O ";
        }else{
            std::cout << "   ";
        }

        if(i != 8){
            std::cout << "|";
        }
    }
    std::cout << std::endl;
}
  
int main(){
  std::vector<int> test = CreateBoard();
}
