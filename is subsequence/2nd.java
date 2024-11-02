class Solution {
    public boolean isSubsequence(String s, String t) {
        int S = s.length();
        int T = t.length();

        //in java we have access to .isEmpty() to check if a string, vector, array etc is empty while in c++ its .empty()
        if(s.isEmpty()){
            return true;
        }

        if (S  > T){
            return false;
        }

        int j = 0;
        for (int i = 0; i < T; i++){
            //in order to access an element in a string in java i need to use .charAt(-)
            if(t.charAt(i) == s.charAt(j)){
                if(j == S-1){
                    return true;
                }
                j+=1;
            }
        }
        return false;
    }
}