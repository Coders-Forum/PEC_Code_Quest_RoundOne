#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'surfaceArea' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY A as parameter.
#

def surfaceArea(A):
    # Write your code here

    # For Top and Bottom
    surf = (H * W) * 2

    # LeftToRight
    for i in range(H):
        current = 0
        for j in range(W):
            if(A[i][j] > current):
                surf += A[i][j] - current
            current = A[i][j]

    # RightToLeft
    for i in range(H):
        current = 0
        for j in range(W - 1, -1, -1):
            if(A[i][j] > current):
                surf += A[i][j] - current
            current = A[i][j]

    # BackToFront
    for j in range(W):
        current = 0
        for i in range(H):
            if(A[i][j] > current):
                surf += A[i][j] - current
            current = A[i][j]

    # FrontToBack
    for j in range(W):
        current = 0
        for i in range(H - 1, -1, -1):
            if(A[i][j] > current):
                surf += A[i][j] - current
            current = A[i][j]

    return surf







if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    H = int(first_multiple_input[0])

    W = int(first_multiple_input[1])

    A = []

    for _ in range(H):
        A.append(list(map(int, input().rstrip().split())))

    result = surfaceArea(A)

    fptr.write(str(result) + '\n')

    fptr.close()
