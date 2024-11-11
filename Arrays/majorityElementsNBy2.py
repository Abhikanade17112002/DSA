class Solution:
    def majorityElement(self, nums):

        cnt = 0
        ele = -1

        for i in range( 0 , len( nums ) )  :
            if( ele == -1 ):
                cnt = 1 
                ele = nums[i] 
            elif( cnt == 0 and ele != nums[i] ) :
                cnt += 1
                ele = nums[i]
            elif( ele == nums[i] ):
                cnt += 1     
            else :
                cnt -= 1


        return ele         