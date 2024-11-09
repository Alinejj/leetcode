//1st method:
class Solution {  
    public boolean isAnagram(String s, String t) {  
        if(s.length() != t.length()){  // If the lengths of the strings are different, they can't be anagrams.
            return false;  // Return false as the strings can't be anagrams if they have different lengths.
        }

        char[] str1 = s.toCharArray();  // Convert the first string into a character array for easy manipulation.
        char[] str2 = t.toCharArray();  // Convert the second string into a character array.

        Arrays.sort(str1);  // Sort the characters in the first string array in ascending order.
        Arrays.sort(str2);  // Sort the characters in the second string array in ascending order.

        return Arrays.equals(str1, str2);  // Compare the two sorted arrays; if they are equal, the strings are anagrams.
    }
}

//2nd method
class Solution {  

    public boolean isAnagram(String s, String t) {  
        
        HashMap<Character, Integer> count = new HashMap<>();  // Creates a HashMap to store the frequency count of each character in string s.
        
        // Loop through each character in string s and update its count in the HashMap.
        for (char c : s.toCharArray()) {  // Iterates over each character in the string s.
            count.put(c, count.getOrDefault(c, 0) + 1);  // For each character, increment its count in the map. If the character doesn't exist, initialize its count to 0 first.
        }

        // Loop through each character in string t and update its count in the HashMap.
        for (char c : t.toCharArray()) {  // Iterates over each character in the string t.
            count.put(c, count.getOrDefault(c, 0) - 1);  // For each character in t, decrement its count in the map. If the character doesn't exist, initialize its count to 0 first.
        }

        // Check if all character counts in the HashMap are 0.
        for (int value : count.values()) {  // Iterates over the values (character counts) in the HashMap.
            if (value != 0) {  // If any count is not 0, it means the characters in s and t don't match in frequency.
                return false;  // Return false if there is a mismatch in character frequency.
            }
        }

        return true;  // If all counts are 0, the strings are anagrams, so return true.
    }
}
