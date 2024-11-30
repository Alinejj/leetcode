class Solution {
    public int[] productExceptSelf(int[] nums) {
        //Creates an array 'answer' of the same size as 'nums'. Unlike Vector or ArrayList, this array has a fixed size.
        int[] answer = new int[nums.length];
        // Fills the entire array 'answer' with 1s. This is important because 
        //we’re calculating products, and starting with 1 allows us to multiply
        // each element without affecting the result.
        Arrays.fill(answer, 1);

        int left = 1;
        for(int i = 0; i<nums.length;i++){
            answer[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.length-1; i>=0; i--){
            answer[i] *= right;
            right *= nums[i];
        }
        return answer;
    }

}