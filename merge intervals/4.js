/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {

    //this is how sorting in js works from start to end
    intervals.sort((a, b) => a[0] - b[0]);

    let answer = []
    for(const interval of intervals){
        if(answer.length == 0 || answer[answer.length-1][1] < interval[0]){
            answer.push(interval);
        }
        else{
            answer[answer.length-1][1] = Math.max(answer[answer.length-1][1], interval[1]);
        }
    }
    return answer;
};