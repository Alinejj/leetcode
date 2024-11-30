class Solution {
public:
    // Function to find two indices such that their values sum up to the target
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create an unordered_map to store numbers and their indices
        // Key: number from the array
        // Value: index of the number in the array
        unordered_map<int, int> numMap;

        // Get the size of the input array `nums`
        int n = nums.size();

        // Loop through each number in the array
        for (int i = 0; i < n; i++) {
            // Calculate the complement needed to reach the target
            // Complement = target - current number
            int complement = target - nums[i];

            // Check if the complement exists in the map
            // If it exists, it means we have already seen a number that pairs with the current number
            // to reach the target
            if (numMap.count(complement)) {
                // If found, return the indices of the complement and the current number
                // numMap[complement] gives the index of the complement
                // i is the index of the current number
                return {numMap[complement], i};
            }

            // Otherwise, store the current number and its index in the map
            // This ensures that future numbers can check against the current one
            numMap[nums[i]] = i;
        }

        // If no valid pair is found, return an empty vector
        // This handles cases where no two numbers sum up to the target
        return {};
    }
};
//so if i have a target of 9 i need to find two indexes from my vector that would add to
//the target so [2, 7, 11, 15] index 0 and 1 give 9 2+7 = 9
//i cant use the same index twice