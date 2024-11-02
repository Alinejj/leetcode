class Solution {
    public int findClosestNumber(int[] nums) {

        //syntax used for c++ is INT_MAX but in java use Integer.MAX_VALUE
        //to assign the max value between |1| and |-1|
        int result = Integer.MAX_VALUE;
        int x;

        //when iterating we do .length instead of .size()
        for (int i = 0; i<nums.length; i++){
             x = 0;
            //in c++ we use abs() but in java its Math.abs()
            x = Math.abs(nums[i]);

            if( x< Math.abs(result) || x == Math.abs(result) && nums[i] > result){
                result = nums[i];
            }
        }
        return result;
    }
}

//same concept as what i wrote in the cpp file but different syntax