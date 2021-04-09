# Problem
# In our school days, all of us have enjoyed the Games period. Raghav loves to play cricket and is Captain of his team. He always wanted to win all cricket matches. But only one last Games period is left in school now. After that he will pass out from school.

# So, this match is very important to him. He does not want to lose it. So he has done a lot of planning to make sure his teams wins. He is worried about only one opponent - Jatin, who is very good batsman.

# Raghav has figured out 3 types of bowling techniques, that could be most beneficial for dismissing Jatin. He has given points to each of the 3 techniques.

# You need to tell him which is the maximum point value, so that Raghav can select best technique.

# 3 numbers are given in input. Output the maximum of these numbers.

# Input:

# Three space separated integers.

# Output:

# Maximum integer value

 

# Sample Input
# 8 6 1 
# Sample Output
# 8
# Time Limit: 5
# Memory Limit: 256
# Source Limit:
# Explanation
# Out of given numbers, 8 is maximum.

a, b, c = map(int, input().split())
if a > b and a > c:
    print(a)
elif b > a and b > c:
    print(b)
else:
    print(c)
