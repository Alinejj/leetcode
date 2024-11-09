class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<int, int> ransom;  // Create a hashmap to count characters in `magazine`

        // Loop through each character in `magazine` to populate the hashmap
        for (char c : magazine) {
            // If character `c` is not yet in the hashmap, initialize its count to 1
            if (ransom.find(c) == ransom.end()) {
                ransom[c] = 1;
            }
            // If character `c` is already in the hashmap, increment its count by 1
            else {
                ransom[c]++;
            }
        }

        // Loop through each character in `ransomNote` to check if it can be constructed
        for (char c : ransomNote) {
            // Check if character `c` exists in the hashmap and has a positive count
            if (ransom.find(c) != ransom.end() && ransom[c] > 0) {
                ransom[c]--;  // Use one occurrence of `c` by decrementing its count
            }
            // If character `c` is not in `magazine` or count is exhausted, return false
            else {
                return false;
            }
        }

        // If all characters in `ransomNote` have been accounted for, return true
        return true;
    }
};

//In this problem we need to construct a ransom note using letters 
//found in magizine and we cant reuse letters
//so if i need aa in my ransom note and i have ab in my magazine
//i need to return false because magazine only has one a
//if i need aa for my ransom note and aab in my magazine then
//i can return true