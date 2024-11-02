/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    //This line creates an array called answer with the same length as nums, and each element is initialized to 1.
    let answer = Array(nums.length).fill(1);

    let left = 1;
    for(let i = 0; i<nums.length; i++){
        answer[i] *= left;
        left *= nums[i];
    }

    let right = 1;
    for(let i = nums.length - 1; i >= 0; i--){
        answer[i] *= right;
        right *= nums[i];
    }

    return answer;
};