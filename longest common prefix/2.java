class Solution {
    public String longestCommonPrefix(String[] strs) {
        //cant use .empty() so i check if the string strs is null or length is 0
       if(strs == null || strs.length == 0){
        return "";
       } 


        int minLength = Integer.MAX_VALUE;
        for(String s : strs){
            //in java i need to use Math.min()
            minLength = Math.min(minLength, (int)s.length());
        }
        int i = 0;
        while(i<minLength){
            //different sytnax here to loop inside the string strs
            for(String s : strs){
                //java doesnt support two dimensions so i need to use .charAt
                 if (s.charAt(i) != strs[0].charAt(i)){
                    return strs[0].substring(0,i);
                 }
            }
            i++;
        }

        return strs[0].substring(0,i);




        }
    }