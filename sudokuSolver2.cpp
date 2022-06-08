#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define DASH "-------------------------------------"
#define N 4

void preProcess(int grid[N][N]){
int row, col;
bool isonly=true;
    for(int i=0; i<N ; i++){
        unordered_set <int> s;
        for(int j=0; j<N; j++){
            if(grid[i][j]!=0){
                s.insert(grid[i][j]);
            }
            else{
                if(isonly==true){
                    row=i;
                    col=j;
                    isonly=false;
                }
            }
        }
        if(isonly==true && grid[row][col]==0){
            for(int i=1; i<=N; i++){
                if(s.find(i)!=s.end()){
                    grid[row][col] = i;
                    break;
                }
            }
        }
    }
    isonly=true;
    for(int i=0; i<N ; i++){
        unordered_set <int> s2;
        for(int j=0; j<N; j++){
            if(grid[j][i]!=0){
                s2.insert(grid[i][j]);
            }
            else{
                if(isonly==true){
                    row=i;
                    col=j;
                    isonly=false;
                }
            }
        }
        if(isonly==true && grid[row][col]==0){
            for(int i=1; i<=N; i++){
                if(s2.find(i)!=s2.end()){
                    grid[row][col] = i;
                    break;
                }
            }
        }
    }
    isonly=true;
    int sub_s = (int)sqrt(N);
    for(int r_i=0;r_i<N;r_i=r_i+sub_s){
        for(int c_i=0;c_i<N;c_i=c_i+sub_s){
        //int r_i = i - i % sub_ s, c_i = j - j % sub_s;
        unordered_set <int> s3;
        for (int p = r_i; p < r_i+sub_s ; p++)
        {
        for (int q = c_i; q < c_i+sub_s; q++)
        {
            if (grid[p][q] != 0)
            {
                s3.insert(grid[p][q]);
            }
            else{
                if(isonly==true){
                    row=p;
                    col=q;
                    isonly=false;
                }
            }
        }
        }
        for(int i=1; i<=N; i++){
                if(s3.find(i)!=s3.end()){
                    grid[row][col] = i;
                    break;
                }
            }
        }
    }
}
    
    
    
    
    // int r_i = i - i % sub_s, c_i = j - j % sub_s;
    // int sub_s = (int)sqrt(N);
    // isonly=true;
    // unordered_set <int> q;
    // for (int t = r_i; t < r_i+sub_s ; t++)
    // {
    //     for (int r = c_i; r < c_i+sub_s; r++)
    //     {
    //         if (grid[t][r] != 0)
    //         {
    //             q.insert(grid[t][r]);
    //         }
    //         else{
    //             if(isonly==true){
    //                 row=i;
    //                 col=j;
    //                 isonly=false;
    //             }
    //         }
    //     }
    // }





bool RulesObeyed(int grid[N][N], int i, int j, int k)
{
    for (int p = 0; p < N; p++)
    { // row + col
        if (grid[i][p] == k || grid[p][j] == k)
        {
            return false;
        }
    }
    int sub_s = (int)sqrt(N);
    int r_i = i - i % sub_s, c_i = j - j % sub_s;
    for (int p = r_i; p < r_i+sub_s ; p++)
    {
        for (int q = c_i; q < c_i+sub_s; q++)
        {
            if (grid[p][q] == k)
            {
                return false;
            }
        }
    }
    return true;
}

bool sudoku_solver(int grid[N][N])
{   int i,j, row, col;
    bool notSolved = false;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
            {   row = i;
                col = j;
                notSolved = true;
            }
        }
        if(notSolved == true){
            break;
        }
    }
    if (notSolved == false)
    {
        return true;
    }

    for (int y = 1; y <= N; y++)
    {
        if (RulesObeyed(grid, row, col, y))
        {
            grid[row][col] = y;
            if (sudoku_solver(grid))
            {
                return true;
            }
            else
            {
                grid[row][col] = 0;
            }
        }
    }

    return false;
}

void print_grid(int grid[N][N])
{
    for (int i = 0; i < N; i++)
    {
        cout << "    " << endl;
        cout << DASH << endl;
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j])
            {
                cout << grid[i][j];
            }
            else
            {
                cout << " ";
            }
            cout << " | ";
        }
    }
    cout << endl << endl;
}

int main()
{
    int grid[N][N] = {{1, 0, 3, 0},
                      {0, 0, 2, 1},
                      {0, 1, 0, 2},
                      {2, 4, 0, 0}};
    
    cout << "Sudoku Solver: " << endl;

    print_grid(grid); // display the input sudoku
    preProcess(grid);
    // if (sudoku_solver(grid))
    // {
    //     cout << "Solved Puzzle: " << endl;
        print_grid(grid);
    // }
    // else
    // {
    //     cout << "No solution" << endl;
    // }
    return 0;
}