/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    let S = s.length;
    let T = t.length;

    if( s == ""){
        return true;
    }
    
    if (S > T){
        return false;
    }

    let j = 0;
    for(let i = 0; i < T; i++){
        if (t[i] == s[j]){
            if(j == S - 1){
                return true;
            }  
            j += 1;     
        }
    }
    return false;
};