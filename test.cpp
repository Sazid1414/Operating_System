#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
vector<vector<int>> findGoodMatrix(vector<vector<int>> &arr);

int main() {
    // Input matrix
    vector<vector<int>> arr = {
       {1, 1, 1, 1},   
{0, 1, 1, 1},
{1 ,1 ,1 ,1},
{0 ,1 ,1 ,1}
    };

    // Print original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Find and modify the matrix
    arr = findGoodMatrix(arr);

    // Print modified matrix
    cout << "\nModified Matrix:" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<vector<int>> findGoodMatrix(vector<vector<int>> &arr) 
{
    int row;
    int col;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(arr[i][j]==0)
            {
                row=i;
                col=j;
                break;
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(i==row)
            {
                arr[i][j]=0;
            }
            else if(j==col)
            {
                arr[i][j]=0;
            }
        }
    }
    return arr;
}
