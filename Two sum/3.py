class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]  # Input list of integers
        :type target: int      # Target sum to achieve with two numbers
        :rtype: List[int]      # Output is a list of two indices
        """
        # Initialize an empty dictionary to store numbers and their indices
        # Key: number from the array
        # Value: index of the number
        map = {}

        # Get the length of the input list
        n = len(nums)

        # Iterate through the list
        for i in range(n):
            # Calculate the complement needed to reach the target
            complement = target - nums[i]

            # Check if the complement is already in the map
            # If it is, it means we found two numbers that add up to the target
            if complement in map:
                # Return the indices of the complement and the current number
                return [map[complement], i]

            # Otherwise, store the current number and its index in the dictionary
            # This allows future elements to check against it
            map[nums[i]] = i

        # If no solution is found, return an empty dictionary (though returning
        # an empty list [] might be more consistent with the return type)
        return {}
