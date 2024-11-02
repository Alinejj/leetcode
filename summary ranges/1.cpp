class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        //initialize an empty vector to store the result as strings
        vector<string>arr;
        //assign i to the first index
        int i = 0;

        //loop while i is less than the size of vector nums
        while(i < nums.size()){
            //assign start with the first element in nums
            int start = nums[i];

            //as long as i doesnt go out of bound and if the first element nums[i] + 1 is equal to nums[i+1]
            while(i<nums.size() - 1 && nums[i]+1 == nums[i+1]){
                i++;//move i to the next index
            }
            //if the starting index i have isnt equal to nums[i]
            if(start != nums[i]){
                arr.push_back(to_string(start)+ "->"+ to_string(nums[i]));
            }
            else{
                //use to_string to convert my int to a string
                arr.push_back(to_string(nums[i]));
            }
              i++;//move to next index
        }
        return arr;
    }
};

//[0,1,2,4,5,7]
//if im starting at 0 index i it checks if my nums[i+1] is equal to nums[i] + 1
//if it is keep going until i reach a break which is 2
//so id have 0->2
//my new starting now is 4 it checks if nums[i+1] == nums[i]+1
//if it is it keeps going until it reaches a break point at 5
//my vector now has 4->5
//my new starting is now 7 but since its the end and if i go further itll be out of bounds
//my vector is 7
//final answer wuld be 0->2, 4->5, 7