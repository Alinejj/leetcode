class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    // Calculate the total number of rows and columns
    int rows = matrix.size();
    int columns = matrix[0].size();

    // Set up pointers to traverse the matrix
    int row = 0;
    int cols = -1;

    // Set the initial direction to 1 for moving left to right
    int direction = 1;

    // Create an array to store the elements in spiral order
    vector<int> answer;

    while(rows>0 && columns>0){
        
        // Move horizontally in one of two directions:
        //   1. Left to right (if direction == 1)
        //   2. Right to left (if direction == -1)
        // Increment the col pointer to move horizontally
        for(int i = 0; i < columns; i++){
            cols += direction;
            answer.push_back(matrix[row][cols]);
        }
        rows--;

        // Move vertically in one of two directions:
        //   1. Top to bottom (if direction == 1)
        //   2. Bottom to top (if direction == -1)
        // Increment the row pointer to move vertically
        for(int i = 0; i < rows; i++){
            row += direction;
            answer.push_back(matrix[row][cols]);
        }
        columns--;

        // Flip the direction for the next traversal
        direction *= -1;
    }
        return answer;

    }
};
//i have an mxn matrix and i need to return the answer in a 
//spiral format, [1,2,3][4,5,6][7,8,9]
//so if i start at index0 and i keep moving till i reach index 2
//i go down index 5 then tp index 8, index 7, index 3 etc