class Solution {
public:
    bool isDuplicate(unordered_map<char, bool>& check, char value){
        if (value == '.') return false;
        if (check.count(value)) return true;
        else {
            check[value] = true;
            return false;
        }
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0; i<9;i++){
            unordered_map<char, bool> check;
            for(int j = 0; j<9; j++){
                if(isDuplicate(check, board[i][j])) return false;
            }
        } for(int i =0; i<9;i++){
            unordered_map<char, bool> check;
            for(int j = 0; j<9; j++){
                if(isDuplicate(check, board[j][i])) return false;
            }
        } for(int i =0; i<3;i++){
            for(int j = 0; j<3; j++){
                unordered_map<char, bool> check;
                for(int k = 0; k<3; k++){
                    for (int l = 0; l<3; l++){
                        if(isDuplicate(check, board[(i*3)+k][(j*3)+l])) return false;
                    }
                }
            }
        } return true;
    }
};
