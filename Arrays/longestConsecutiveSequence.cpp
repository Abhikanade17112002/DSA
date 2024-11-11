#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set < int> st ;
        int maxLength = 1 ;


        for( int i = 0 ; i < nums.size() ; i++ ){
            st.insert( nums[i] ) ;
        }



        for( auto it : st ){
            if( st.find( it - 1 ) == st.end() ){
                int cnt = 1 ;
                int ele = it ;


                while( st.find( ele + 1 ) != st.end()  ){
                    cnt++ ;
                   ele =  ele + 1 ;
                }


                maxLength = max( maxLength , cnt ) ;
            }
        }

        return maxLength ;
    }
};