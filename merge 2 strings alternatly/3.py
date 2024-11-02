class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
       #empty string to add word 1 and 2 in
        str = ''

        first = len(word1)
        second = len(word2)

        # loop in both words and add them into str
        for i in range (min(first,second)):
            str += word1[i]
            str+=word2[i]
       #take a slice of word1 starting from the end of length of word2 which would be the starting index of the slice
        #Then the colon (:) followed by no end index means "go to the end of the string.
        if first > second:
            str += word1[second:]
        if second > first:
            str += word2[first:]
        return str