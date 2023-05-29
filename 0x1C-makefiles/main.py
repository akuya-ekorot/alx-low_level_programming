#!/usr/bin/python3
"""
5-main
"""
from island_perimeter import island_perimeter

if __name__ == "__main__":
    grid = [
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1]
    ]
    print(island_perimeter(grid))
