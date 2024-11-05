class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        #This creates a list called answer with the same length as nums, with each element initialized to 1.
        answer = [1] * len(nums)

        left = 1
        for i in range(len(nums)):
            answer[i] *= left
            left *= nums[i]

        right = 1
        #len(nums)-1: Starts at the last index.
        #(len(nums)-1,-1):Stops just before reaching -1, which means it includes index 0.
        #(len(nums)-1, -1, -1): Step size of -1, making it decrement in each iteration
        for i in range(len(nums)-1, -1, -1):
            answer[i] *= right
            right *= nums[i]

        return answer