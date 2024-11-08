class Solution:
    def findMaxConsecutiveOnes(self, nums):
        maxCount  = 0 
        count = 0 

        for i in range( 0 , len( nums )):
            if nums[i] == 1 :
                count += 1 
            else:
                maxCount = max( maxCount , count)
                count = 0    
        
        maxCount = max( count , maxCount) 
        return maxCount 