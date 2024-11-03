class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        row = len(matrix)
        column = len(matrix[0])

        rows = 0
        cols = -1

        direction = 1

        answer = []

        while row > 0 and column > 0:
            for i in range(column):
                cols += direction
                answer.append(matrix[rows][cols])
            row -=1

            for i in range(row):
                rows += direction
                answer.append(matrix[rows][cols])
            column -=1
            direction *= -1

        return answer