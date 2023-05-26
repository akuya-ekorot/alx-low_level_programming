#!/usr/bin/python3
"""
Module contains the functions necessary to find the perimiter of an island
described by the grid:

grid:
    a list of integers
    1 represents a land zone
    One cell is a square with the side length of 1
    Grid cells are connected horizontally/vertically not diagonally
    Grid is rectangular, width and height do not exceed 100
    The grid is surrounded by water, and there is one island or nothing
    The island doesn't have lakes
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described by the grid
    """

    # find the first cell of land by looping through the matrix
    # okay Morpheus, lol 😅
    # this also helps in identifying if there is a piece of land in the grid
    loop = True
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[0]) - 1):
            if grid[i][j] == 1:
                loop = False
                break
        if not loop:
            break

    # check if loop didn't find a piece of land and do an early-ish return
    # early-ish return? Lol, you call this early after an O(n^2) operation?
    # get your shit together bruh
    if not grid[i][j]:
        return 0

    # walk around the perimeter. but how tho?
    # identify start position this will also be the first current position
    start = curr = {"y": i, "x": j}

    # we also need a list of all cells we've seen, so...
    seen = []

    # now we pass the grid, start, curr, perimeter and seen to the recursive fn
    # over to you in the studio
    return walk(grid, start, curr, 0, seen)


def walk(grid, start, curr, perimeter, seen):
    """Recursively calculate walk around the perimeter and return"""

    # directions to check in CSS order, lol, up, right, down, left
    directions = [
        [1, 0],
        [0, 1],
        [-1, 0],
        [0, -1],
    ]

    # let's add the curr position to our seen array
    seen.append(curr)

    # tell me why I have a loop inside a recursive function????
    # well, coz you need to check all directions
    for i in range(0, len(directions)):

        # next cell to check based on direction
        next = {
            "y": curr["y"] + directions[i][0],
            "x": curr["x"] + directions[i][1]
        }

        # base cases
        # if next cell is water add one to the perimeter
        if not grid[next["y"]][next["x"]]:
            perimeter += 1

        # only recurse if there's land and we've not seen it
        if grid[next["y"]][next["x"]] and next not in seen:
            perimeter = walk(grid, start, next, perimeter, seen)

    # finally, what we came here for
    return perimeter
