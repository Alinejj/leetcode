/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let buy = prices[0];
    let profit = 0;

    for ( let i = 0; i<prices.length; i++){
        if(prices[i] < buy){
            buy = prices[i];
        }
        if(prices[i] - buy > profit){
            profit = prices[i] - buy;
        }
    }
     return profit;
};