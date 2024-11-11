#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

class Solution {
public:
    std::vector<int> majorityElementTwo(std::vector<int>& nums) {
        int cnt1  = 0 ;
        int cnt2 = 0 ;
        int ele1 = INT_MIN , ele2 = INT_MIN ;
         
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( ele1 == INT_MIN and nums[i] != ele2 ){
                ele1 = nums[i] ;
                cnt1++ ;
            }
            else if( ele2 == INT_MIN and nums[i] != ele1 ){
                ele2 = nums[i] ;
                cnt2++ ;
            }
            else if( cnt1 == 0  and nums[i] != ele2 ){
                ele1 = nums[i] ;
                cnt1++ ;
            }
            else if( cnt2 == 0  and nums[i] != ele1 ){
                ele2 = nums[i] ;
                cnt2++ ;
            }
            else if( ele1 == nums[i] ){
                cnt1++ ;
            }
            else if( ele2 == nums[i] ){
                cnt2++ ;
            }
            else{
                cnt1-- ;
                cnt2-- ;
            }
        } 

        int Count1 = 0 , Count2 = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] == ele1 ){
                Count1++ ;
            }
            else if( nums[i] == ele2 ){
                Count2++ ;
            }
        }

  int size = nums.size() ;
        if( ele1 == ele2 and ( cnt1 > size/3 || cnt2 > size/3 ))
       {
        return { ele1 } ;
       }

        if( Count1 > size/3 and Count2 > size/3 )
        {
            return { ele1 , ele2 } ;
        }
        else if( Count1 >  size/3 )
        {
            return { ele1 } ;
        }
        else if( Count2 > size/3 )
        {
            return { ele2 } ;
        }


        return {} ;

  
    }
};