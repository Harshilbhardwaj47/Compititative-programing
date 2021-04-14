# Problem
# Jack is your friend and Sophia is his girlfriend. But due to some unknown reason ( unknown for us, they know it) Sophia started hating to Jack. Now, Jack is in big trouble but he has a solution, He knows that if he will gift T patterns of a particular type ( For pattern observation see the sample test cases) then Sophia will start loving again to Jack. But Jack is depressed now and need your help to gift her that type patterns of '*' and '#' of N lines. So, it's your responsibility to save your friend's relationship.

# Constraints :

# 1 ≤  T ≤ 100

# 1 ≤  N ≤ 30

# Input :

# First Line contains T i.e. number of test case.
# Each of the next T lines contain an integer N.

# Output:

# For each test case print the pattern of N lines then after a blank line.

# Sample Input
# 3
# 9
# 2
# 5
# Sample Output
# *################*
# **##############**
# ***############***
# ****##########****
# *****########*****
# ******######******
# *******####*******
# ********##********
# ******************

# *##*
# ****

# *########*
# **######**
# ***####***
# ****##****
# **********
# Time Limit: 1
# Memory Limit: 256
# Source Limit:


if __name__ == '__main__':
    t = int(input())
    while t>0:
        t-=1
        n = int(input())
        n*=2
        for i in range(1,n):
            n-=2
            print('*'*i +'#'*n+'*'*i)
            if n <1:
                break
            
            
            
