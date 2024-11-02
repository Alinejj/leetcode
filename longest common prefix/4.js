/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    //same as java i cant use .empty()
    if(strs == null || strs == 0){
           return "";
       }
   let minLength = Number.MAX_SAFE_INTEGER;
   //in order to loop inside strs i say const s of strs
   for(const s of strs){
    //to get the minimum i use Math.min()
       minLength = Math.min(minLength,s.length );
   }
   let i = 0;
   while (i < minLength){
       for (const s of strs){
           if(s[i] != strs[0][i]){
               return strs[0].substring(0,i);
           }
       }
       i++;
   }
    return strs[0].substring(0,i);
};