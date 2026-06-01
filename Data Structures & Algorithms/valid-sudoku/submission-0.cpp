class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int r=0;r<9;r++){
            unordered_set<char> rowSet;
            for(int c=0;c<9;c++){
                char val=board[r][c];

                if(val!='.'){
                    if(rowSet.count(val)) return false;
                    rowSet.insert(val);
                }
            }
        }
        for(int c=0;c<9;c++){
            unordered_set<char> colSet;
            for(int r=0;r<9;r++){
                char val=board[r][c];

                if(val!='.'){
                    if(colSet.count(val)) return false;
                    colSet.insert(val);
                }
            }
        }

        for(int r=0;r<3;r++){
            for(int c=0;c<3;c++){
                unordered_set<char> sq;
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        char ch=board[r*3+i][c*3+j];

                        if(ch!='.'){
                            if(sq.count(ch)) return false;
                            sq.insert(ch);
                        }
                    }
                }
            }
        }
        return true;

    }
};
