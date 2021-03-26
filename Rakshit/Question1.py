l = []
n = int(input())
for i in range(n):
    letter = input()
    l.append(letter)
    
a = ['a','e','i','o','u']
b= ['A','E','I','O','U']
for letter in l:
    
    for j in a:
        if j in letter:
            flag = 1
            continue
        
        else:
            flag=0
            break
 
    if flag==0:
        for j in b:
            if j in letter:
                flag = 1
                continue
        
            else:
                flag=0
                break
         
    if flag == 0:
        print("ugly string")
    else:
        print("lovely string")
