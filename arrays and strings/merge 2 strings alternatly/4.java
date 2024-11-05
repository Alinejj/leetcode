class Solution {
    public String mergeAlternately(String word1, String word2) {
      String str = "";
      int first = word1.length();
      int second = word2.length();

      for ( int i = 0; i < first && i < second; i++){
        str += word1.charAt(i);
        str += word2.charAt(i);
      }

      if(first > second){
        str += word1.substring(second);
      }
      if(second > first){
        str += word2.substring(first);
      }
      return str;
    }
}