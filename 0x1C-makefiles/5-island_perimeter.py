#!/usr/bin/python3
"""perimeter of island"""


def island_perimeter(grid):
    """ function """
    count = 0
    if grid:
        gridLen = len(grid)
        rowLen = len(grid[0])
        for index1, row in enumerate(grid):
            for index2, zone in enumerate(row):
                if zone:
                    if index1 == 0:
                        count += 1
                    else:
                        if not grid[index1 - 1][index2]:
                            count += 1
                    if index1 >= gridLen - 1:
                        count += 1
                    else:
                        if not grid[index1 + 1][index2]:
                            count += 1
                    if index2 == 0:
                        count += 1
                    else:
                        if not row[index2 - 1]:
                            count += 1
                    if index2 >= rowLen - 1:
                        count += 1
                    else:
                        if not row[index2 + 1]:
                            count += 1
    return count
