/**
 * @param {number[]} nums - Array of integers to search.
 * @param {number} target - The target sum to find.
 * @return {number[]} - Indices of the two numbers that add up to the target.
 */
var twoSum = function(nums, target) {
    // Initialize a Map to store the number and its index
    // Key: number from the array
    // Value: index of the number
    let map = new Map();

    // Get the length of the array for iteration
    let n = nums.length;

    // Iterate through the array
    for (let i = 0; i < n; i++) {
        // Calculate the complement needed to reach the target
        let complement = target - nums[i];

        // Check if the complement exists in the Map
        // If it does, we have found the two numbers
        if (map.has(complement)) {
            // Return the indices of the complement and the current number
            return [map.get(complement), i];
        }

        // Otherwise, store the current number and its index in the Map
        map.set(nums[i], i);
    }

    // If no solution is found, return an empty object (though an empty array [] is typically expected)
    return {};
};
