#!/usr/bin/python3
"""Defines a function to measure the perimeter of an island."""


def island_perimeter(grid):
    """ Return island perimeter.

    0 is a water zone.
    1 is a land zone.

    Args:
        grid (list): a list of list of integers.
    Returns:
        Island perimeter.
    """

    edge = 0
    size = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size++
                if (j > 0 and grid[i][j - 1] == 1) or
                    (i > 0 and grid[i - 1][j] == 1):
                    edge++

    return ((size * 4) - (edge * 2))
