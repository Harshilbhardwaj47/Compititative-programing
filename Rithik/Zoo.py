# Problem
# You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if .

# Determine if the entered word is similar to word zoo.

# For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

# Input format

# First line: A word that starts with several Zs and continues by several Os.
# Note: The maximum length of this word must be .
# Output format

# Print Yes if the input word can be considered as the string zoo otherwise, print No.

# Sample Input
# zzzoooooo
# Sample Output
# Yes
# Time Limit: 0.5
# Memory Limit: 256
# Source Limit:

s = input()
x= s.count('z')
y= s.count('o')

if y==2*x:
    print('Yes')
else:
    print('No')
