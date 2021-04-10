# Problem
# Max has a string S with length N. He needs to find the number of indices i (1≤i≤N−11≤i≤N−1) such that the i-th character of this string is a consonant and the i+1th character is a vowel. However,she is busy, so she asks for your help.

# Note: The letters 'a', 'e', 'i', 'o', 'u' are vowels; all other lowercase English letters are consonants.

# Input

# The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
# The first line of each test case contains a single integer N.
# The second line contains a single string S with length N.
# Output

# For each test case, print a single line containing one integer ― the number of occurrences of a vowel immediately after a consonant

# Constraints

# 1≤T≤1001≤T≤100
# 1≤N≤1001≤N≤100
# SS contains only lowercase English letters
# Sample Input
# 3
# 6
# bazeci
# 3
# abu
# 1
# o
# Sample Output
# 3
# 1
# 0
# Time Limit: 1
# Memory Limit: 256
# Source Limit:
# Explanation

t=int(input())
vowel=['a','e','i','o','u']
for test in range(t):
    count=0
    n=int(input())
    val=input().lower()

    for i in range(len(val)-1):
        if val[i] not in vowel:
            if val[i+1] in vowel:
                count+=1
                i+=1

    print(count)
