class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          // Create an answer vector, initially filled with 1s, of the same size as nums.
        // This will store the product of all elements except itself for each index.
        vector<int> answer(nums.size(), 1);


        //initialize left to 1 that would represent 1[1,2,3,4]
        int left = 1;
        // Traverse from left to right, updating the answer array with the product of all elements to the left.
        for(int i = 0; i<nums.size();i++){
            //multiply the first index with left which is 1 so if i had 1[1,2,3,4] my answer rn would be [1, , , ]
            answer[i] *= left;
            //multiple left with the value of the index at i
            left *= nums[i];
        }
        
         //initialize right to 1 that would represent [1,2,3,4]1
        int right = 1;
        //in order to start from the right side I need i to be the last index 
        //which can be done by nums.size()-1, and i can loop as long as i is not negative and i decrement to go right to left
        // Traverse from right to left, updating the answer array with the product of all elements to the right
        for(int i = nums.size() - 1; i>=0 ;i--){
            //multiply the first index with left which is 1
            answer[i] *=right;
            //multiple right with the value of the index at i
            right *= nums[i];
        }

        return answer;

    }
};

//[1,2,3,4]
//what im doing is multiplying all the indexes except itself
//so if i is at 1 my new array would have 2x3x4 = 24
//if my is at 2 my arr would have 1x3x4 = 12
//so my answer array would be [24, 12, 8, 6]
//a way to tackle this project is to create 2 arrays left and right
//the left arr will have a left multiplier that adds the answers to its arr
//starting from the left so [1,2,3,4] (set the multiplier to 1) -> 1 [1,2,3,4] 1
//left arr = [1, 1, 2, 6, 4]
//same for right arr = [24,12,4,1]
//multiply left and right arr [24,12,8,6]