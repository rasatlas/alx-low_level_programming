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

    row = 1
    column = 1
    perimeter = 0

    for row in range(len(grid) - 1):
        for column in range(len(grid[row]) - 1):
            if grid[row][column] == 1:
                if grid[row - 1][column] == 0:
                    perimeter += 1
                if grid[row + 1][column] == 0:
                    perimeter += 1
                if grid[row][column - 1] == 0:
                    perimeter += 1
                if grid[row][column + 1] == 0:
                    perimeter += 1
    return perimeter
