//
//  main.cpp
//  sudoku validator
//
//  Created by Mengjiao Xu on 12/12/15.
//  Copyright (c) 2015 Mengjiao Xu. All rights reserved.
//  Snapchat OA

#include <iostream>
using namespace std;
bool isValidSudoku(char board[9][9])
{
    bool used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int num = board[i][j] - '0' - 1, k = i/3*3+j/3;
            if(used1[i][num] || used2[j][num] || used3[k][num])
                return false;
            used1[i][num] = used2[j][num] = used3[k][num] = true;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    char board[9][9];
    char temp;
    int i = 0, j = 0;
    while(cin >> temp){
        board[i][j] = temp;
        if(j==8) {
            i++; j=0;
        } else {
             j++;
        }
    }
    if(isValidSudoku(board)) cout << "is valid sudoku" << endl;
    else cout << "not valid sudoku" << endl;
}
