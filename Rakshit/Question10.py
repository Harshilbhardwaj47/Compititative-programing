# Problem
# Given N numbers in the input. Print these numbers in the same order as they come in input.

# Input:

# First line contains integer N - denoting total count of numbers that are to be printed.

# Second line contains N space separated integers.

# Output:

# Print the numbers in input.

# Constraints:

# 1 <= N <= 100

# Sample Input
# 5
# 56 30 3 94 58 
# Sample Output
# 56 30 3 94 58 
# Time Limit: 5
# Memory Limit: 256
# Source Limit:
# Explanation
# Simply all integers are printed.

a = int(input())
if a>=1 and a<=100:
    b = list(input().split())
    for i in b:
        print(i,end=" ")
