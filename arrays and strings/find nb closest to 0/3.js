/**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {

    //in c++ its INT_MAX but in javascript its Number.MAX_SAFE_INTEGER
    let result =  Number.MAX_SAFE_INTEGER;
    //Also in javascript we use let and constant to assign variables
    let x;
    //when iterating we do .length instead of a .size
    for(let i = 0; i < nums.length; i++){
        x = 0;
        //we use Math.abs() in javascript like in java
        x = Math.abs(nums[i]);

        if( x < Math.abs(result) || x == Math.abs(result) && nums[i] > result ){
            result = nums[i];
        }


    }
    return result;
};

//same question as c++