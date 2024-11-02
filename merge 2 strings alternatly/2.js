/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    let str = '';
    let first = word1.length;
    let second = word2.length;
    
    for(let i = 0; i < first && i < second; i++){
        str += word1[i];
        str += word2[i];
    }


    if(first > second){
        //in order to use substr in javascript we write .substring which essentially creates a ministring starting from the end of length of word2
        str += word1.substring(second);
    }
    if(second > first){
        str += word2.substring(first);
    }
    return str;
};