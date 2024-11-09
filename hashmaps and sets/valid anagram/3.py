#1st method
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        
        return sorted(s) == sorted(t)
    
#2nd method
class Solution(object):  

    def isAnagram(self, s, t):  
        :type s: str  
        :type t: str  
        :rtype: bool  
        
        count = defaultdict(int)  # Creates a defaultdict of type int, which initializes missing keys with a default value of 0.

        # Iterate over each character in string 's' and increment its count in the 'count' dictionary.
        for c in s:  # Loops over each character in string s.
            count[c] += 1  # Increments the count of the character 'c' by 1 in the count dictionary.

        # Iterate over each character in string 't' and decrement its count in the 'count' dictionary.
        for c in t:  # Loops over each character in string t.
            count[c] -= 1  # Decrements the count of the character 'c' by 1 in the count dictionary.

        # Check if any character has a non-zero count in the dictionary, which would indicate a mismatch.
        for value in count.values():  # Iterates through the values of the count dictionary (the frequency of each character).
            if value != 0:  # If any value is not zero, the strings are not anagrams.
                return False  # Return False as the strings are not anagrams.

        return True  # If all counts are zero, return True indicating the strings are anagrams.
