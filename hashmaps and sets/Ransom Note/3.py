class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        # Create an empty dictionary to count characters from magazine
        ransom = {}

        # Iterate through each character in magazine
        for i in range(len(magazine)):
            c = magazine[i]  # Get character at index i in magazine
            # If character not in ransom dictionary, initialize with count 1
            if c not in ransom:
                ransom[c] = 1
            # If character already exists, increment its count by 1
            else:
                ransom[c] += 1

        # Iterate through each character in ransomNote
        for i in range(len(ransomNote)):
            c = ransomNote[i]  # Get character at index i in ransomNote
            # Check if character is in ransom dictionary and count is greater than 0
            if c in ransom and ransom[c] > 0:
                ransom[c] -= 1  # Decrement character count by 1
            # If character not in ransom dictionary or count is 0, return False
            else:
                return False

        # If all characters in ransomNote can be constructed, return True
        return True
