#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:

    vector<int> printRow( int row ){
        vector < int> temp ;
        int ans = 1 ;
        temp.push_back( ans ) ;


        for( int col = 1 ; col < row ; col++ ){
            ans = ans * ( row -  col ) ;
            ans = ans / col ;
            temp.push_back(ans) ;
        }


        return temp ;
    } 
    vector<vector<int>> pascalTriangle(int numRows) {
        vector<vector<int>> ans ;


        for( int row = 1 ; row <= numRows ; row++ ){
           vector<int> currRow =  printRow(row) ;
           ans.push_back(currRow) ;
        }


        return ans ; 
    }
};