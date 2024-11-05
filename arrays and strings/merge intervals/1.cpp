class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //if the given interval is [[2,6],[1,3],[8,10],[15,18]]
        //i cant really do anything or see the overlap unless its sorted
        sort(intervals.begin(), intervals.end());

        //this will store the merges intervals
        vector<vector<int>> answer;

        for (auto interval : intervals){
            // Check if answer is empty or if the end of the last interval in answer
            // is less than the start of the current interval
            // answer.empty() ensures we can safely access answer.back()
            // answer.back()[1] gets the end of the last interval in answer
            // interval[0] gets the start of the current interval
            if(answer.empty() || answer.back()[1] < interval[0]){
                answer.push_back(interval);
            }
            else{
                // If there is an overlap, we need to merge the intervals
                // We take the maximum end of the last interval and the current interval
                // This updates the end of the last merged interval in answer
                answer.back()[1] = max(answer.back()[1], interval[1]);
            }
        }
        return answer;
    }
};
// Explanation of the code:
// 1. We sort the intervals to make it easier to merge overlapping ones.
// 2. We initialize an empty vector 'answer' to store the merged intervals.
// 3. We loop through each interval:
//    - If 'answer' is empty or the last interval in 'answer' does not overlap
//      with the current interval, we add the current interval to 'answer'.
//    - If there is an overlap, we merge by updating the end of the last interval
//      in 'answer' to the maximum of its current end and the current interval's end.
// 4. Finally, we return the 'answer' containing all merged intervals.