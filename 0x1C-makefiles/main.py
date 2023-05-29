#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__("5-island_perimeter").island_perimeter

if __name__ == "__main__":

    # grid is fully land
    grid = [
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1]
    ]

    for row in grid:
        print(row)

    print(island_perimeter(grid))

    # grid is fully land
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0],
    ]

    for row in grid:
        print(row)

    print(island_perimeter(grid))
