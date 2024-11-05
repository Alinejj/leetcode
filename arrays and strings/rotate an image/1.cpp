class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
    
    
     // This loop goes through only the upper triangle of the matrix (above the diagonal).
    // By starting j from i + 1, we avoid double-swapping and unnecessary operations.
    // Transposing swaps each element at (i, j) with its corresponding element at (j, i),
    // effectively converting rows into columns for rotation.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap elements to transpose
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    
    // After transposing, reversing each row completes the 90-degree clockwise rotation.
    // This step flips each row horizontally.
    for (int i = 0; i < n; i++) {
        // Reverse current row
        reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};
//if i have [1,2,3]
//          [4,5,6]
//          [7,8,9]
//and i need to rotate the image i can use what i learned in linear algebra
//i can forst get the transpose for each row and turn it into columns
//  [1,4,7]
//  [2,5,6]
//  [3,6,9]
//after getting the transpose i can reverse each row which i can end up with
//  [7,4,1]
//  [6,5,2]
//  [9,6,3]