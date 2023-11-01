# Editorial Vacuum Cleaning

## Unbridged problem statement

There is a long hallway that can be represented by a matrix of 2 rows and N columns. Let's denote the cell on the intersection of the i-th row and j-th columns as (i, j). The distance between the cells (i1, j1) and (i2, j2) is |i1 - i2| + |j1 - j2|. Some of the cells of the hallway are dirty, and there is a robot that has to clean the hallway. The robot starts in the cell (1, 1) (the upmost left cell) and finds the closest dirty cell to its current cell, goes to that cell and cleans it. He will repeat this process until the whole hallway is cleaned. However, if there are two dirty cells at the same distance from the robot’s current position he will malfunction. Your task is to clean the least amount of dirty cells so that the robot doesn’t malfunction when you turn it on. You have to output the number of cells that you leave dirty on the hallway.

## Solution

Observation: since there are only 2 rows on the hallway, the closest dirty cell from the robot will always be on the same column or on a column to its right. The robot will never move left.

We can solve this problem by using dynamic programming. We will assume that when the robot reaches the cell (i, j), every cell on the columns behind him are already cleaned. The state of the problem can be represented by three variables: the row the robot is currently at, the column the robot is currently at, and whether the cell on the opposite row but exactly on the same column is dirty (value 1) or not (value 0). We will hold the maximum amount of dirty cells we can leave in the columns behind the cell (row, col) we are at in the values memo[row][col][0] and memo[row][col][1]. memo[row][col][0] assumes that the cell (1 - row, col) is clean and memo[row][col][1] assumes that the cell (1 - row, col) is dirty. Assuming that the robot is in the cell (row, col), there are 3 possible situations (same_row will have the value 1 if cell (row, col + 1) is dirty and diff_row will have the value 1 if cell (1 - row, col + 1) is dirty):

- The robot moves to the cell (1 - row, col) and then (1 - row, col + 1) and you have to manually clean the cell (row, col + 1) if it is dirty which represents the update: memo[1 - row][col + 1][0] = max(memo[1 - row][col  + 1][0], memo[row][col][1] + diff_row)
- The cell (1 - row, col + 1) is clean, the robot moves to the cell (row, col + 1) and you have to manually clean the cell (1 - row, col) if it is dirty which represents the update: memo[row][col + 1][0] = max(memo[row][col + 1][0], memo[row][col][0] + same_row)
- The cell (1 - row, col + 1) is dirty, the robot moves to the cell (row, col + 1) and you have to manually clean the cell (1 - row, col) if it is dirty which represents the update: memo[row][col + 1][1] = max(memo[row][col + 1][1], memo[row][col][0] + same_row + diff_row)

Starting in the first column, if the transitions above are repeated in all possible cells, column by column, the final answer will be the maximum of the following values: memo[0][N - 1][0], memo[0][N - 1][1], memo[1][N - 1][0] and memo[1][N - 1][1].