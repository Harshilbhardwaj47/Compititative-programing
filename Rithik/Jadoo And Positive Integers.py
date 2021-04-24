# Problem
# Contributor : Sagnik Chaudhuri

# Jadoo has been given a set of integers by his teacher. His assignment is to print the sum of all the Positive Integers among them. But Jadoo, being lazy, decides to write the program with the shortest source code. Can you help him?

# INPUT

# t – number of test cases [t < 1000] On each of next t lines given a integer N [-1000 <= N <= 1000]

# OUTPUT

# One integer equals to sum of all positive integers.

# SCORING

# This is a codegolf problem. Score = maxScore* (200 - S)/200

# S = Number of characters in source code.

# If S > 200 then score is 0.

# Symbols with ASCII Code <=32 doesn't count as a character for the checker code. Note: We encourage you not to use comments in your code for this type of problem

# Note: We encourage you not to use comments in your code for this type of problem

# Sample Input
# 4
# 5
# -5
# 6
# -1
# Sample Output
# 11


t = int(input())
l = []
res = 0
for i in range(t):
    n = int(input())
    l.append(n)
    
for i in range(len(l)):
    if l[i]>0:
        res = res+l[i]
print(res)
