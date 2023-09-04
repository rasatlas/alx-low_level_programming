#!/usr/bin/python3
"""
Module that calculates perimeter of islands.
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid.
    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Return:
        The perimeter of the island defined in grid.
    """

    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row != 0 and grid[row - 1][column] == 0:
                    perimeter += 1
                if row != len(grid) and grid[row + 1][column] == 0:
                    perimeter += 1
                if column != 0 and grid[row][column - 1] == 0:
                    perimeter += 1
                if column != len(grid[row]) and grid[row][column + 1] == 0:
                    perimeter += 1
    return perimeter
