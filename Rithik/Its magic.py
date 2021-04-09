# Problem
# Sussutu is a world-renowned magician. And recently, he was blessed with the power to remove EXACTLY ONE element from an array.

# Given, an array A (index starting from 0) with N elements. Now, Sussutu CAN remove only that element which makes the sum of ALL the remaining elements exactly divisible by 7.

# Throughout his life, Sussutu was so busy with magic that he could never get along with maths. Your task is to help Sussutu find the first array index of the smallest element he CAN remove.

 

# Input:

# The first line contains a single integer N.

# Next line contains N space separated integers Ak , 0 < k < N.

 

# Output:

# Print a single line containing one integer, the first array index of the smallest element he CAN remove, and -1 if there is no such element that he can remove!

 

# Constraints:

# 1 < N < 105

# 0 < Ak < 109

# Sample Input
# 5
# 14 7 8 2 4
# Sample Output
# 1
# Time Limit: 1
# Memory Limit: 256
# Source Limit:
# Explanation
# Both 14 and 7 are valid answers, but since 7 is the smallest, the required array index is 1.
def magic(t,arr):
    minn = max(arr)
    sum1=sum(arr)
    # print(minn)
    # print(sum1)
    for check in arr:
        if (sum1-check)%7==0:
            if check < minn:
                minn = check

    # print(minn)
    if minn==0:
        minn=-1
        print(minn)
    else:
        print(arr.index(minn))

if __name__ == '__main__':
    t = int(input())
    arr = list(map(int, input().split()))[:t]
    magic(t,arr)
