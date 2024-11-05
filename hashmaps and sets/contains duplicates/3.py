class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        check = set()

        for num in nums:
            if num in check:
                return True
            check.add(num)
        return False

#second approach
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """

        # Create an empty dictionary named check.
        # This dictionary will store each unique number in nums as a key,
        # and the count of times that number has appeared as the value.
        check = {}

        for num in nums:
            # Check if num is already in the dictionary:
                # - `num in check`: Checks if num is a key in the check dictionary.
                #   This will be True if num has been encountered before.
                # - `check[num] >= 1`: Checks if the count of num in the dictionary is 1 or more.
                # If both conditions are True, it means num is a duplicate.
            if num in check and check[num] >= 1:
                return True
            
            # If no duplicate was found for this number, update the dictionary with the current number:
            # - `check.get(num, 0)`: get() is a dictionary method that retrieves the value for num if it exists.
            #   If num is not in check, it returns the default value 0.
            # - `+ 1`: Increment the count by 1 to account for the current appearance of num.
            # - `check[num] = ...`: Store the new count of num in the dictionary.
            check[num] = check.get(num, 0) + 1
        return False