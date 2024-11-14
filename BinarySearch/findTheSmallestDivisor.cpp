class Solution {
public:


  bool possible( vector<int> &nums, double mid, int limit){
    int ans = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ ){
        int add = ceil( (double)nums[i] / mid ) ;
        // cout<<"add :"<<add<<mid<<" mid:"<<endl ;
        ans = ans + add ;
    }

    if( ans <= limit ){
        return true  ;
    }
    else{
        return false ;
    }
  }
  int smallestDivisor(vector<int> &nums, int limit) {

    int minEle = nums[0] ;
    int maxEle = nums[0] ;


    for( int i = 0 ; i < nums.size() ; i++ ){
        minEle = min( minEle , nums[i] ) ;
        maxEle = max( maxEle , nums[i] ) ;
    }

    int low = 1 , high = maxEle ;

   int ans = INT_MAX ;
    while( low <= high ){
       double mid = ( low + high ) / 2 ;


        if( possible(nums, mid ,limit ) ){
            ans = mid ;
           high = mid - 1 ;
           
        }
        else{
         low= mid + 1 ;
        }
    }
       return ans ;
    }
};