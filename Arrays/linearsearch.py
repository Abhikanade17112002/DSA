class Solution:
    def linearSearch(self, nums, target):

        index = -1 
        size = len(nums)
        for i in range(0, size):
            if nums[i] == target:
                index = i
                break

        return index  
        
        # Line 6: Improve formatting - remove space before 'len'
        # Line 8: Improve formatting - remove space before '0'
        # Line 8: Improve formatting - remove space after '0'
        # Line 9: Improve formatting - align indent for 'index = i' to match the previous line