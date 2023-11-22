#!/usr/bin/python3
"""
This Modual contains island_perimeter function
"""


def island_perimeter(grid):
    '''
    This function solve Island Problem
    '''
    wd = len(grid[0])
    hg = len(grid)
    e = 0
    n = 0
    i, j = 0, 0

    for i in range(hg):
        for j in range(wd):
            if grid[i][j] == 1:
                n += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    p = n * 4 - e * 2
    return p
