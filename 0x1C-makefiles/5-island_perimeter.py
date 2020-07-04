#!/usr/bin/python3
""" My module for calculated island perimeter """


def island_perimeter(grid):
    """ Create a function that returns the perimeter
    of the island described in grid

    Arguments:
        grid: 0 represents a water zone, 1 represents a land zone
    """

    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row - 1 < 0 or grid[row - 1][column] == 0:
                        perimeter = perimeter + 1
                if row + 1 > len(grid) - 1 or grid[row + 1][column] == 0:
                        perimeter = perimeter + 1
                if column - 1 < 0 or grid[row][column - 1] == 0:
                        perimeter = perimeter + 1
                if column + 1 > len(grid[row]) - 1 \
                or grid[row][column + 1] == 0:
                        perimeter = perimeter + 1
    return perimeter
