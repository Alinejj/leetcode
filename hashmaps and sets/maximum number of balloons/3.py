class Solution(object):
    def maxNumberOfBalloons(self, text):
        """
        :type text: str
        :rtype: int
        """
        # Define the size of the word "balloon"
        balloon_size = 7
        # Initialize sum to store how many times we can form "balloon"
        sum = 0
        # The string "balloon"
        bal = "balloon"
        
        # If the length of text is less than the length of "balloon", return 0
        if len(text) < balloon_size:
            return 0
        
        # Count the frequency of each character in the input text
        count = Counter(text)
        
        # Keep forming "balloon" as long as we have enough letters
        while True:
            # Check each character in "balloon"
            for char in bal:
                # If the character is not in count or we don't have enough of it, return the sum
                if count[char] == 0:
                    return sum
                
                # Decrease the count of that character
                count[char] -= 1
            
            # Once we successfully form one "balloon", increment the sum
            sum += 1
        
        return sum
