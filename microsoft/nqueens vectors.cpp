#include<bits/stdc++.h>
using namespace std;
void createboard(int n,vector<vector<int>>&board)
{
     vector<int>row;
        for(int j=0;j<n;j++)
        {
            row.push_back(0);
        }
    for(int i=0;i<n;i++)
    {
      board.push_back(row);
    }
}
void printboard(vector<vector<int>>board)
{
    for(int i=0;i<board[0].size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            cout<<board[i][j]<<" ";

        }
        cout<<endl;
    }
}
bool isSafe(vector<vector<int>>&board,int row,int col)
{
for(int i=0;i<col;i++)
{
    if(board[row][i])
        return false;
}
for(int i=row,j=col;i>=0&&j>=0;i--,j--)
{
    if(board[i][j])
        return false;
}
for(int i=row,j=col;i<board.size()&&j>=0;i++,j--)
{
    if(board[i][j])
        return false;
}
return true;
}
bool solveNQUtil(vector<vector<int>>&board, int col)
{
   int n=board.size();
   if(col>=n)
    return true;
   for(int i=0;i<n;i++)
   {
       if(isSafe(board,i,col))
       {
           board[i][col]=1;

           if(solveNQUtil(board,col+1))
            return true;
           board[i][col]=0;

       }

   }
   return false;
}
int main()
{
    vector<vector<int>>boardgame;
     createboard(15,boardgame);
     printboard(boardgame);
     solveNQUtil(boardgame,0);

     cout<<endl;

     printboard(boardgame);

}
