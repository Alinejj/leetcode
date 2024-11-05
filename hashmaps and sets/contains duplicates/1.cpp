//First approach:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // Loop through each element in the array up to the second last element
        for(int i = 0; i < nums.size() - 1; i++){
            // For each element, check all elements that come after it
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

//Second approach:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Initialize an unordered_set to track seen elements
        unordered_set<int>check;

        for(int num : nums){
             // If the number already exists in the set, return true (duplicate found)
            if(check.count(num) > 0){
                return true;
                 // Insert the number into the set
                check.insert(num);
            }
        }
        return false;
    }
};
//Explanation:
//check.count(num) checks if num is already present in the set.
//unordered_set::count returns either 0 (if the element is not found) or 1 (if the element is found). Since sets do not allow duplicates, count will never return more than 1.
//Therefore, check.count(num) > 0 effectively checks if num exists in the set. If num is present, it means we’ve already seen it, so we return true to indicate a duplicate.
//So, check.count(num) > 0 is essentially checking for the existence of num in the set.




//Third approach:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // Initialize an unordered_map to track occurrences of each number
        unordered_map<int, int>check;
        for(int num : nums){
            // If the number is already in the map with a count >= 1, return true (duplicate found)
            if(check[num] >=  1){
                return true;
               
            }
            // Increment the count of the number in the map
             check[num]++;
        }
        return false;
    }
};
//Explanation:
//check[num] refers to the count of num in the map. If num has been seen before, check[num] will be 1 or higher.
//We use >= 1 here because, in this approach, check[num] can have values greater than 1, indicating multiple occurrences of num.
//If check[num] is 1 or more, it means num has been seen before, so we return true to indicate a duplicate.
//So, in this case, check[num] >= 1 checks if num has been encountered at least once before.







//The problem requires checking for duplicates in the array. Since we only need a true or false response, 
//we don’t need to identify all duplicate values or count occurrences beyond the first duplicate found. 
//The goal is to determine if there exists at least one duplicate, which means we can stop our search as soon as we find one.



//An unordered_set is a data structure that:
//Stores unique elements with no duplicates allowed.
//Does not maintain any particular order of elements.
//Allows O(1) average-time complexity for insertions, deletions, and lookups due to the use of a hash table.

//An unordered_map is a data structure that:
//Stores key-value pairs where each key is unique, but values can repeat.
//Allows O(1) average-time complexity for insertions, deletions, and lookups (like unordered_set), also due to the use of a hash table.
//Provides fast access to values based on their corresponding keys.