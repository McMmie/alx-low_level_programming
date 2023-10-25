#!/usr/bin/python3
"""
Technical question module
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    p = 0
    count = 0
    for rows in grid:
        for digit in rows:
            if digit == 1:
                count += 1

    if count == 1:
        p = 4
    else:
        p = (count * 2) + 2

    return p
