class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        //assign result with the value of the maximum between the two numbers that are closes to zero
        //will have the same answer when they are absolute value
       int result = INT_MAX;
       //the number that will store the absolute val
       int x;


        //iterate through the vector
       for(int i = 0; i < nums.size(); i++){
        x = 0;

        //assign x to the absolute value for each index
        x = abs(nums[i]);


        //check if the absolute value assigned to x is less than the 
        //absolute val of the max number that we set result in to satisy
        //if we had |1| and |-1| or check if x is equal to the absolute
        //value of the result and the index in vector i is > result
        if( x < abs(result) || x == abs(result) && nums[i] > result){

            //assign result with the index in vector i
            result = nums[i];
        }
       }
       return result;
    }
};


//Meaning:
//[-4, -2, 1, 4, 8]
//check the absolute value for each index value
//and return the number thats closer to 0
//if we get two numbers example -1 and 1
//where their absolute value is equal to each other
//return the greatest number between both so 1 > -1