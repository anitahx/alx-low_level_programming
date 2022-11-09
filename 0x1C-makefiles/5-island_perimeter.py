#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for column in range(height):
        for row in range(width):
            if grid[column][row] == 1:
                size += 1
                if (row > 0 and grid[column][row - 1] == 1):
                    edges += 1
                if (column > 0 and grid[column - 1][row] == 1):
                    edges += 1
    return size * 4 - edges * 2
