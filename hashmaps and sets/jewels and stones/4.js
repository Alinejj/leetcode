/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let sum = 0;

    for(let i = 0; i < jewels.length; i++){
        for(let j = 0; j < stones.length; j++){
            if(jewels[i] == stones[j]){
                sum++;
            }
        }
    }
    return sum;
};