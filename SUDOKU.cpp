#include<iostream>
using namespace std;
    bool is(int row,int col,vector<vector<char>>& board,int i){
        char c=i+'0';
        for(int j=0;j<9;j++){
            if(board[row][j]==c){
                return false;
            }
            if(board[j][col]==c){
                return false;
            }
            if(board[3*(row/3)+j/3][3*(col/3)+j%3]==c){
                return false;
            }


        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){
                        for(int i=1;i<=9;i++){
                            if(is(row,col,board,i)){
                                board[row][col]=i+'0';
                                bool aagepossible=isValidSudoku(board);
                                if(aagepossible){
                                    return true;
                                }
                                else{
                                    board[row][col]='.';
                                }
                            }
                        }
                        return false;
                    }
                }
            }
            return true;
        }
    void solveSudoku(vector<vector<char>>& board) {
        if(isValidSudoku(board)){
            for(int i=0;i<9;i++){
                cout<<"[";
                for(int j=0;j<9;j++){
                    cout<<board[i][j];
                }
                cout<<"]";
            }
        }
    }

int main(){
    vector<vector<char>> board(9,vector<char>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    solveSudoku(board);
return 0;

}