# Problem
# Contributor : Sagnik Chaudhuri

# Jadoo's best friend is in trouble. In order to save him, he has been given a task. The task is : Print the reverse of a given String Input. But, as you know that Jadoo is too lazy, he decides to do this using shortest code possible. Please help him, will you?

# INPUT

# A given String S of length N [1<=N<=1000]

# OUTPUT

# The reverse of that whole string

# SCORING

# This is a codegolf problem. Score = maxScore* (100 - S)/100

# S = Number of characters in source code.

# If S > 100, then score = 0.

# Symbols with ASCII Code <=32 doesn't count as a character for the checker code. 

# Note: Your Code should contain characters < 100

# Note: We encourage you not to use comments in your code for this type of problem

# Sample Input
# Jadoo
# Sample Output
# oodaJ

n = input()
l = []
for i in range(len(n)):
    l.append(n[i])
l.reverse()
print(*l,sep='')
