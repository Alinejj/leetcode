class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
       
       #in python we import sys and we can use the sys.maxsize
       result = sys.maxsize


        #iteration in python is different we say for the index num in the List num
       for num in nums:
          #we use and , or to do the && and ||
         if abs(num) < abs(result) or (abs(num) == abs(result) and num > result):
             result = num

       return result