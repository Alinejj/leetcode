class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Create a HashMap to store numbers and their indices
        // Key: number from the array
        // Value: index of the number
        HashMap<Integer, Integer> map = new HashMap<>();

        // Get the length of the input array
        int n = nums.length;

        // Loop through each number in the array
        for (int i = 0; i < n; i++) {
            // Calculate the complement needed to reach the target
            // Complement = target - current number
            int complement = target - nums[i];

            // Check if the complement is already present in the map
            // If found, it means the current number pairs with it to form the target
            if (map.containsKey(complement)) {
                // Return the indices of the complement and the current number
                // map.get(complement) gives the index of the complement
                // i is the index of the current number
                return new int[]{map.get(complement), i};
            }

            // If complement is not found, add the current number and its index to the map
            // This ensures future numbers can check against the current number
            map.put(nums[i], i);
        }

        // If no valid pair is found, return an empty array
        // This handles cases where no two numbers sum up to the target
        return new int[]{};
    }
}
