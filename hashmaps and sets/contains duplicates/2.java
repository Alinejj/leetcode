class Solution {
    public boolean containsDuplicate(int[] nums) {
        // Create an empty HashSet named check to store unique integers as we iterate over nums.
        // HashSet is chosen because it doesn't allow duplicate values and has O(1) average time complexity
        // for add and contains operations, making it efficient for checking duplicates.
        HashSet<Integer> check = new HashSet<>();

        for(int num:nums){
            //Check if the current number (num) already exists in the HashSet.
            // If check.contains(num) returns true, it means we found a duplicate
            if(check.contains(num)){
                return true;
            }
            // If no duplicate was found, add the current number (num) to the HashSet.
            check.add(num);
        }
        return false;
    }
}

//second approach:
class Solution {
    public boolean containsDuplicate(int[] nums) {

        // Create a HashMap named seen to store Integer key-value pairs.
        // In this HashMap, each key represents a unique number from the nums array,
        // and the value represents how many times that number has appeared.
        HashMap<Integer, Integer> check = new HashMap<>();

        for (int num : nums) {
            // Check if the current number (num) is already in the HashMap:
            // - `containsKey(num)`: A HashMap method that checks if the map contains the specified key (num).
            //   It returns true if the key is present, false otherwise.
            // - `seen.get(num)`: A HashMap method that retrieves the value associated with the key (num).
            //   In this case, the value is the count of how many times num has appeared in the array so far.
            // - `seen.get(num) >= 1`: Checks if the count is 1 or more, meaning num has already been seen.
            // Together, these conditions determine if num has appeared previously, making it a duplicate.
            if (check.containsKey(num) && check.get(num) >= 1){
                return true;
            }
            // If no duplicate was found for this number, update the HashMap with the current number.
            // seen.put(num, ...) will insert or update num as a key in the HashMap with a new value:
            // - seen.getOrDefault(num, 0): If num is not in the map, getOrDefault returns 0 as its value.
            // - +1: Increment the count for num by 1.
            // This line either sets num's frequency to 1 (if it’s the first time seeing num) 
            // or increments it by 1 if it’s already in the map.
            check.put(num, check.getOrDefault(num, 0) + 1);
        }
        return false;
    }
}