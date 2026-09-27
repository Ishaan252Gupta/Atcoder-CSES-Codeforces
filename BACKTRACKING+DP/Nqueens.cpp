#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Horizontal
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q')
                return false;
        }

        // Vertical
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Left diagonal
        for (int i = row, j = col;
             i >= 0 && j >= 0;
             i--, j--) {

            if (board[i][j] == 'Q')
                return false;
        }

        // Right diagonal
        for (int i = row, j = col;
             i >= 0 && j < n;
             i--, j++) {

            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }


    void nQueens(vector<string>& board,
                 int row,
                 int n,
                 vector<vector<string>>& ans) {

        // All queens placed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column
        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col, n)) {

                // Place queen
                board[row][col] = 'Q';

                // Move to next row
                nQueens(board, row + 1, n, ans);

                // Backtracking
                board[row][col] = '.';
            }
        }
    }


public:

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        nQueens(board, 0, n, ans);

        return ans;
    }
};


int main() {

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    Solution obj;

    vector<vector<string>> ans = obj.solveNQueens(n);

    cout << "\nNumber of solutions: " << ans.size() << "\n\n";

    for (int i = 0; i < ans.size(); i++) {

        cout << "Solution " << i + 1 << ":\n";

        for (string row : ans[i]) {
            cout << row << endl;
        }

        cout << endl;
    }

    return 0;
}