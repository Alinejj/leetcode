class Solution {
    public List<String> summaryRanges(int[] nums) {
         // This line initializes an ArrayList named ranges
         // which will hold the resulting range strings
         // Using a list allows us to dynamically add elements without
         // worrying about the size of the array beforehand
        List<String> ranges = new ArrayList<>();
        //i will be used to traverse the input array nums
        int i = 0;

        while(i < nums.length){
            int start = nums[i];
            //i must be less than nums.length - 1 to ensure there is a next element to compare
            //and It checks if the next number in the array (nums[i + 1]) 
            //is exactly one greater than the current number (nums[i]), indicating that the numbers are consecutive.
            while(i<nums.length - 1 && nums[i+1] == nums[i]+1){
                i++;
            }
             // After exiting the inner while loop, this line checks if 
             //start is not equal to the current number at index i
             //If they are not equal, it means we have identified a range.
            if(start != nums[i]){
                ranges.add(start+ "->"+ nums[i]);
            }
            else{
                ranges.add(String.valueOf(nums[i]));
            }
           i++; 
        }
        return ranges;
    }
}


//In Java, using List<String> ranges = new ArrayList<>(); for the summaryRanges method is advantageous due to its dynamic sizing,
//allowing to add elements without predefining the size, which is essential since you don't know how many ranges will result 
//from the input array. ArrayList preserves the order of elements, ensuring that the ranges appear in the same sequence as the input,
// and provides convenient methods like add(), simplifying the process of appending results.
// Additionally, it offers flexibility for future modifications or operations on the data, making it a more efficient
// and user-friendly choice compared to fixed-size arrays or other collections.