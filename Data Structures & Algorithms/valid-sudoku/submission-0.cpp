class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N=9;
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for(int r=0;r<N;r++){
            for(int c=0;c<N;c++){
                char val=board[r][c];

                if(val=='.'){
                    continue;
                }

                if(rows[r].count(val)){
                    return false;
                }
                rows[r].insert(val);

                if(cols[c].count(val)){
                    return false;
                }
                cols[c].insert(val);

                int boxINDEX = (r / 3) * 3 + c / 3;
                if (boxes[boxINDEX].count(val)) {
                    return false;
                }
                boxes[boxINDEX].insert(val);

            }
        }
        return true;
    }
};
