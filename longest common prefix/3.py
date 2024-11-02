class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        #in python i can just check if a string is empty by saying if not
        if not strs:
            return ""
      
        
        minLength = sys.maxsize
        for s in strs:
            minLength = min(minLength, len(s))
        
        i = 0
        while i < minLength:
            for s in strs:
                #check if the first character in s[i] is not equal to  strs[0] which is my first string and [i] as the index of the character
                if s[i] != strs[0][i]:
                    #in order to create a substring strs[0] which is my first string  and [:i] which starts at the begining character till i
                    return strs[0][:i]
            i+=1
        
        return strs[0][:i]
                    