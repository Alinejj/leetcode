//1st method:
class Solution {
public:
    bool isAnagram(string s, string t) {
        //since an anagram is just the rearrangement of words then
        //both strings need to have the same length
        if(s.length() != t.length()){
            return false;
        }

        //if i sort both words and i equate them and they are equal then they are an anagram
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

//2nd method
class Solution {
public:
    bool isAnagram(string s, string t) {
        //an unordered map to store the character frequencies, the key of the map
        //represents a character and the value represents the frequency
      unordered_map<char, int> count;

      //iterate through each character c in string s and for each
      //character increment its frequency in the count map
      for(auto c : s){
        count[c]++;
      }

      //iterate through each character c in string t and for each
      //character decrement its frequency in the count map
      for(auto c: t){
        count[c]--;
      }

      //iterate now for each character c in my count map
      //check if any frequency is non-zer0 by accessing 
      //the second element in the map which is the value susing c.second 
      for(auto c : count){
        if(c.second != 0){
            //If any frequency is non-zero, it means there is a character 
            //that appears more times in one string than the other, 
            //indicating that the strings are not anagrams. In that case, return false.
            //If all frequencies in the count map are zero, 
            //it means the strings s and t have the same characters in the same frequencies,
            // making them anagrams. In this case, the function returns true.
            return false;
        }
      }
      return true;
    }
};