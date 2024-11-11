#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;

        int left = 0 , top = 0 ;
        int right = cols - 1 , bottom = rows - 1 ;


        while( left <= right and top <= bottom ){
            // Left To Right 
            for( int i = left ; i <= right ; i++ ){
                ans.push_back( matrix[top][i]) ;
                
            } 
            top++ ;

            // Top To Bottom

            for( int i = top ; i <= bottom ; i++  ){
                ans.push_back( matrix[i][right]) ;
            }
            right-- ;

            //  Right  To Left
            if( top <= bottom  ){
                for( int i = right ; i >= left ; i--  ){
                    ans.push_back( matrix[bottom][i]) ;
                }
                bottom-- ;
            }
            
            // Bottom To Top
             if( left <= right  ){
                for( int i = bottom ; i >= top ; i--  ){
                    ans.push_back( matrix[i][left]) ;
                }
                left++ ;
             }
        }


        return ans ;

    }
};