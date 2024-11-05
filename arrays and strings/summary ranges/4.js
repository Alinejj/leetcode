/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    let arr = [];
    let i = 0;

    while (i < nums.length){
        let start = nums[i];

        while(i < nums.length - 1 && nums[i+1] == nums[i]+1){
            i++;
        }
        if(start != nums[i]){
            arr.push(String(start) + "->" +String(nums[i]));
        }
        else{
            arr.push(String(nums[i]));
        }
        i++;
    }
    return arr;
};

//In JavaScript, you don't have a built-in Vector class like in Java or C++. Instead, JavaScript uses arrays, 
//which are dynamic and can hold various types of data, including other arrays. You can easily create an array and manipulate
// its contents using array methods such as push(), pop(), shift(), and unshift().