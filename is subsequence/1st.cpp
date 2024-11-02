class Solution {
public:
    bool isSubsequence(string s, string t) {
        int S = s.size();
        int T = t.size();

        // If string s is empty, it will automatically be considered a subsequence of string t
        if (s == ""){
            return true;
        } 

        //if the size of string s is greater than the size of string t
        //return false since we are checking is s is a subsequence of t
        if (S > T){
            return false;
        }

        //assign j with 0 and it will be used as my index for size s
        int j = 0;
        for (int i = 0; i < T; i++){
            //when the index at string t is equal to the index at string s
            if(t[i] == s[j]){
                //and also if j is the last element of string 1 return true
                if( j == S - 1){
                    return true;
                }
                //increment the index j for size t
                j += 1;
            }
        }
        return false;
    }
};

//s = abc and t = ahbgdc
//what is check if s is a subsequence of t
//which means i need to see if all my letters in s can
//be found in t if they are found return true
//if not return false
//note that if i had ace its a subsequence of abcde since ace was found in order 
//so if i had aec instead it will return false becase in abcde e is in the last position