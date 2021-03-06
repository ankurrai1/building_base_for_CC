#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<vector<int>> board, int row, int col){
    
    int s = board.size();
    
    for(int i = 0; i < row; i++){
        if(board[i][col] == 1) return false;
    }
    
    int i = row,  j = col;
    while(i >=0 && j >= 0){
        if(board[i][j] == 1) return false;
        i--, j--;
    }
    
    i = row,  j = col;
    while(i >= 0 && j < s){
        if(board[i][j] == 1) return false;
        i--, j++;
    }
    
    return true;
}

void show(vector<vector<int>> board){
    for(vector<int> row : board){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}

void NqueenPlacement(vector<vector<int>> board, int n, int row = 0){
    if(n == 0){
        show(board);
        cout << endl << endl;
        return;
    }
    for(int i = 0; i < board.size(); i++){
        if(canPlace(board, row, i)){
            board[row][i] = 1;
            NqueenPlacement(board, n - 1, row + 1);
            board[row][i] = 0;
        }
    }
}

int main(){
    
    int n = 4;
    vector<int> row(n, 0);
    vector<vector<int>> board(n, row);
    
    NqueenPlacement(board, n);
    
    return 0;
}