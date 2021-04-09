# Problem
# This is an easy problem. 

# All you need to do is to print the first 10 multiples of the number given in input.

# Input:

# An integer N, whose first 10 multiples need to be printed.

# Output:

# First 10 multiples of number given in input

# Constraints:

# 1 <= N <= 5000

# Sample Input
# 3
# Sample Output
# 3
# 6
# 9
# 12
# 15
# 18
# 21
# 24
# 27
# 30
# Time Limit: 5
# Memory Limit: 256
# Source Limit:
# Explanation
# Here N = 3.

# So first 10 multiples of 3 have to be printed.


a = int(input())
if a >=1 and a<=5000:
    for i in range(1,11):
        print(a*i)
