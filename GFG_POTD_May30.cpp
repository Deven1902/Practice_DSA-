// 30 may -> gfg potd
// Word Search -> https://practice.geeksforgeeks.org/problems/word-search/1

class Solution {
public:

    bool help(vector<vector<char>> &board,string word,int i,int j,int index){
        if(index==word.length())return true;
        if(i<0 or j<0 or i==board.size() or j==board[0].size() or board[i][j]!=word[index])return false;
        board[i][j]='-';
        index++;
        bool a=help(board,word,i+1,j,index) || help(board,word,i-1,j,index)||help(board,word,i,j+1,index)
               ||help(board,word,i,j-1,index);
        board[i][j]=word[index-1];
        return a;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    bool a = help(board,word,i,j,0);
                    if(a)return a;
                }
            }
        }
        
        return false;
    }
};

// striver's solution below:- 

class Solution {
public:

    bool dfs(int r, int c, vector<vector<int>>&visited,vector<vector<char>>& board,string word,int match){
        int m = board.size(),n = board[0].size(), stLen = word.length();
        
        // dir array to traverse in all 4 directions
        int dir[][4] = {{-1,0},{0,-1},{1,0},{0,1}};
        visited[r][c] = 1;
        
        // checking if we have reached to end of string
        if(match+1 == stLen)return true;
        for(int i=0;i<4;i++){
            int newRow = r + dir[i][0];
            int newCol = c + dir[i][1];
            int index = match+1;
            
            // boundary conditions and checking if characters are equal
            if(newRow>=0 && newCol>=0 && newRow<m && newCol<n && board[newRow][newCol] == word[index] && visited[newRow][newCol]==0){
                 if(dfs(newRow,newCol,visited,board,word,index))return true;
            }
        }
        
        // modifying the visited if we dont find the string in dfs call for further evaluation
        visited[r][c] = 0;
        return false;
    }

 

    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size(),n = board[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        
        // calling dfs for initial matching word of string
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0]){
                    if(dfs(i,j,visited,board,word,0) == true)return true;
                }
            }
        }
        return false;
    }
};
