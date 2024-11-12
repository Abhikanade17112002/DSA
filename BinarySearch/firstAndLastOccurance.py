class Solution:
    def getFirst( self , nums , target) :
        left = 0 
        right = len( nums ) - 1 
        ans = len( nums )

        while( left <= right ) :
            mid = ( left + right ) // 2 

            if( nums[mid] >= target ):
                ans = mid 
                right = mid - 1 
            else :
                left = mid + 1 

            
        if ans == len( nums ) or nums[ans] != target :
            return -1 
        else :
            return ans     

    def getLast( self , nums , target) :
        left = 0 
        right = len( nums ) - 1 
        ans = len( nums )

        while( left <= right ) :
            mid = ( left + right ) // 2 

            if( nums[mid] > target ):
                ans = mid 
                right = mid - 1 
            else :
                left = mid + 1 
                


        return ans     


    def searchRange(self, nums, target):

        firstOccurance = -1 
        lastOccurance = -1 


        firstOccurance = self.getFirst( nums , target ) 

        if firstOccurance == -1 :
            return [ -1 , -1 ]
        else :
            return [ firstOccurance ,self.getLast( nums , target ) - 1]
