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

int GetPlayerChoice(){
    std::cout << "Please input number where you want to play." << std::endl;
    std::cout << "1.Top Left   2.Top Mid   3.Top Right" << std::endl;
    std::cout << "4.Mid Left   5.Middle    6.Mid Right" << std::endl;
    std::cout << "7.Bot Left   8.Bot Mid   9.Bot Right" << std::endl;
    
    std::string choice = "";
    getline(std::cin, choice);

    int num_choice = stoi(choice) - 1;
    return num_choice;
}
  
int main(){
  std::vector<int> test = CreateBoard();
}
