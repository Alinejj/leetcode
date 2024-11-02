class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //if the array of strings is empty return ""
        if(strs.empty()){
            return "";
        }

        //assign minLength with INT_MAX in order not to go out of bounds due to words being shorter than the other
        int minLength = INT_MAX;
        //loop through the vector strs
        for (const string s : strs){
            //assigns minLength with the length of the shortest string in strs
          minLength = min(minLength, (int)s.length());
        }
        int i = 0;
        while(i < minLength){
            for(const string& s: strs){
                //if the index of s is not equal to the the first string in strs i access the character of the first strinf
                if (s[i] != strs[0][i]){
                    //returns the substring of the first string where the first parameter 0 is the starting index and i is the length of the substring
                    return strs[0].substr(0,i);
                }
            }
            //go to the next index
            i++;
        }
        return strs[0].substr(0,i);
    }
};

//i need to find the longest common prefix among 3 array of strings
//if i had flower, flow, flight
//i loop through each string at index i and compare each index with eah other
//then i return the letters that are found in the 3 strings
//if there is no common letters i return ""