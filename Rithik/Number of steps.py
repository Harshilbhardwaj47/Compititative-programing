# Problem
# You are given two arrays  and . In each step, you can set  if . Determine the minimum number of steps that are required to make all 's equal.

# Input format

# First line:  
# Second line: 
# Third line: 
# Output format

# Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

# Constraints


# Sample input

# 2
# 5 6
# 4 3

# Sample output

# -1

# Sample Input
# 5
# 5 7 10 5 15
# 2 2 1 3 5
# Sample Output
# 8
# Time Limit: 1
# Memory Limit: 256
# Source Limit:


t =  int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

minn = min(a)
flag = True
count = 0
for i in range(t):
    while a[i] > minn and b[i] != 0:
        a[i] = a[i] - b[i]
        count+=1
    if a[i] < 0:
        flag = False
        break
    else:
        minn = min(a)
for i in a:
    if i != minn :
        flag = False
        break
if flag == False:
    print("-1")
else:
    print(count)

