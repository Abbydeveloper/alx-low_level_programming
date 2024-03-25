#!/usr/bin/python3
"""
Defines an island perimeter measuring function.
"""
def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): a list of list of integers.
    Returns:
        The perimeter of the island in the grid.
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
