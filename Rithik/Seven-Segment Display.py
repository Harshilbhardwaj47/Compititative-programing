worked
# test = int(input())
# numerical = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
# value = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6 ]
# total = dict(zip(numerical, value)) # dictionary with key value pair is made, it can be done with simple dict function also. 
# for i in range(test):
#     num = str(input()) 
#     sumy = 0
#     new = []
#     for j in num: # here it takes a single digit(it's not integer here, is a character of string(num), that's why num input was in string format)
#         sumy += total[int(j)] #here, whatever the number is in i, it refers to dictionary(total) and picks the value for i, and adds to sum.(for 1 it takes 2, for 2 it adds five and so on)
#     if sumy % 2 == 0: #now if sumy is even, then the largest number can be generated with "1'" repeated for (sumy/2) times, as 1 takes two matchsticks.If one seven is incorporated, result number will become shorter by one digit. Think it this way - if you have 8 as sum, yo can generate "1111" (2 + 2 + 2 + 2 = 8) which is largest, but if you replace with 7(requires 3 sticks) it becomes 771 (3 + 3 + 2 = 8).
#         print("1" * int(sumy /2))
#     else:
#         print("7" * 1 + "1" * (int(sumy //2)-1)) # on the other hand if you have 9 as sum, with 1 it becomes "1111" (2 + 2 + 2 + 2 =8) (with one matchstick extra), thus you use "7" and it becomes "7111" (3 + 2+ 2+ 2 = 9) which is definitely greater than "1111".
self code partially worked

# t = int(input())
# n = [6,2,5,5,4,5,6,3,7,6]
# inp = 0
# arr = []
# k = 0
# take = []
# for i in range(t):
#     num = int(input())
#     while (int(num) > 0):
#         inp = (num%10)
#         arr.append(inp)
#         num//=10
        
#     for j in (arr):
#         k = k + n[j]
        
#     if bool(k) == True:   
#         if k%2 ==0:
#             k//=2
#             take.append('1'*k)
#         elif k%2!=0:
#             if k==3:
#                 take.append('7')
#             elif k>3:
#                 k-=3
#                 k=k//2
#                 take.append('7'+'1'*k)
#     else:
#         take.append('1'*3)
# print(*take,sep='\n')




