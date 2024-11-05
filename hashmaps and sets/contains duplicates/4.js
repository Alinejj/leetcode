/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {

    //Create a new Set called check to store unique numbers as we iterate over nums.
    // A Set is used here because it only stores unique values, so it helps efficiently track duplicates.
    const check = new Set(); 

    for(const num of nums){
        // Check if the Set already contains the current number (num).
        // If check.has(num) returns true, it means we found a duplicate.
        if(check.has(num)){
            return true;
        }
        // If no duplicate was found, add the current number (num) to the Set.
        check.add(num);
    }
    return false;
};

//second approach:
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {

    // Declare a new Map called `check`.
    // Maps are data structures in JavaScript that store key-value pairs and provide efficient lookup for checking duplicates.
    const check = new Map();

    for(const num of nums){
        // Check if the current `num` already exists as a key in the `check` map:
            // - `check.has(num)`: The `has()` method checks if `num` is a key in `check`.
            // If `num` is in `check`, it means we found a duplicate.
        if(check.has(num)){
            return true;
        }
        // If no duplicate is found for `num`, add `num` as a key to `check` with no specific value.
        // - `check.set(num)`: Adds `num` to `check`, allowing future iterations to recognize it as a duplicate if encountered again.
        check.set(num);
    }
    return false;
   
};