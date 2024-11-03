/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    let row = matrix.length;
    let column = matrix[0].length;

    let rows = 0;
    let cols = -1;

    let direction = 1;

    let answer = [];

    while(row > 0 && column > 0){

        for(let i = 0; i < column; i++){
            cols += direction;
            answer.push(matrix[rows][cols]);
        }
        row--;

        for(let i =0; i < row; i++){
            rows += direction;
            answer.push(matrix[rows][cols]);
        }
        column --;

        direction *= -1;

    }
    
    return answer;


};
