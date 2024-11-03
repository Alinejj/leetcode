class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;

        int row = 0;
        int cols = -1;

        int direction = 1;

        List<Integer> answer = new ArrayList<>();

        while(rows > 0 && columns > 0){
            for(int i = 0; i < columns; i++){
                cols += direction;
                answer.add(matrix[row][cols]);
            }
            rows--;

            for(int i = 0; i < rows; i++){
                row += direction;
                answer.add(matrix[row][cols]);
            }
            columns--;

            direction *= -1;
        }
        return answer;
    }
}