class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        // Create a HashMap to store character counts from the magazine string.
        HashMap<Character, Integer> ransom = new HashMap<>();

        // Loop through each character in the magazine.
        for (int i = 0; i < magazine.length(); i++) {
            char c = magazine.charAt(i);  // Get the current character from magazine.

            // If the character isn't in the map, add it with an initial count of 1.
            if (!ransom.containsKey(c)) {
                ransom.put(c, 1);
            }
            // If the character is already in the map, increment its count by 1.
            else {
                ransom.put(c, ransom.get(c) + 1);
            }
        }

        // Loop through each character in the ransomNote.
        for (int i = 0; i < ransomNote.length(); i++) {
            char c = ransomNote.charAt(i);  // Get the current character from ransomNote.

            // Check if the character exists in the map and has a positive count.
            if (ransom.containsKey(c) && ransom.get(c) > 0) {
                // Decrease the character's count in the map by 1 as it's used.
                ransom.put(c, ransom.get(c) - 1);
            }
            // If the character is not available or count is 0, return false (cannot construct ransomNote).
            else {
                return false;
            }
        }

        // If all characters in ransomNote were successfully matched, return true.
        return true;
    }
}

