class Solution {
    public int[][] merge(int[][] intervals) {
        // If there are no intervals, return an empty 2D array
        if (intervals.length == 0) return new int[0][0];

        // Sort the intervals by their start times to make it easier to merge overlapping intervals
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        // Create a list to store the merged intervals as we go
        List<int[]> answer = new ArrayList<>();
        for(int[] interval : intervals){
            // Check if the answer list is empty or if the current interval does not overlap with the last one in answer
            // If there's no overlap (end of last interval < start of current interval), we can safely add the interval
            if(answer.isEmpty() || answer.get(answer.size()-1)[1] < interval[0]){
                answer.add(interval);
            }
            else{
                // If there's an overlap, merge the current interval with the last interval in answer by updating the end time
                // Update the end of the last interval in answer to be the max end of the two overlapping intervals
                answer.get(answer.size()-1)[1] = Math.max(answer.get(answer.size()-1)[1], interval[1]);
            }
        }
        // Convert the list of merged intervals into a 2D array and return it
        return answer.toArray(new int[answer.size()][]);
    }
}