# Vacuum Cleaning

## Original Problem
https://codeforces.com/problemset/problem/1739/E

## Description
Professor E. Gadd developed a new robot to help him on his chores. Can you setup the hallway so that the robot doesn't malfunction

## Problem Statement
Professor E. Gadd is known for his scientific research about ghosts and is responsible for a variety of inventions such as the Poltergust series of vacuums that Muigi uses in his paranormal adventures. In addition to ghost hunting, professor E. Gadd, that is getting older year after year, has been showing some interest in the automated cleaning field. For that he developed the Polterdust 9000!

Professor E. Gadd has a long hallway that can be represented by a matrix of 2 rows and n columns. Let's denote the cell on the intersection of the i-th row and j-th columns as (i, j). The distance between the cells (i1, j1) and (i2, j2) is |i1 - i2| + |j1 - j2|.

The Polterdust 9000 starts in the cell (1, 1). Some cells of the hallway are clean and others are dusty (the cell where the vacuum starts at is clean). Professor E. Gadd wants to clean the hallway, so he is going to launch the vacuum to do it.

After the vacuum is launched, it works as follows. While at least one cell is dirty, the vacuum chooses the closest (to its current cell) cell among those that are dusty, moves there and cleans it (so the cell is no longer dusty). After cleaning a cell, the robot again finds the closest dusty cell to its current cell, and so on. This process repeats until the whole hallway is clean.

However, there is a critical bug in the vacuum’s program. If at some moment, there are multiple closest (to the vacuum’s current position) dusty cells, it malfunctions!

Professor E. Gadd wants to clean the hallway in such a way that the vacuum doesn't malfunction. Before launching the vacuum, he can clean some (possibly zero) of the dusty cells himself. However, he doesn't want to do too much dirty work yourself while he has this nice, smart (yet buggy) vacuum to do this. Note that he cannot make a clean cell dusty.

Help professor E. Gadd calculate the maximum possible number of cells he can leave dusty before launching the Polterdust 9000, so that it doesn't malfunction.

## Input
The first line contains one integer N — the number of columns in the hallway
Then two lines follow, denoting the 1st and the 2nd row of the hallway. These lines contain N characters each, where 0 denotes a clean cell and 1 denotes a dirty cell. The starting cell of the robot (1,1) is clean

## Constraints
- 2 ≤ N ≤ 2⋅10<sup>5</sup>

## Output
Print one integer — the maximum possible number of cells you can leave dirty before launching the robot, so that it doesn't malfunction
