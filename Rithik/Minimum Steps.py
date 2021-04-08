t = input()
cou=0
flag=0
for i in range(int(t)):
    
    k,m,n = map(int,input().split())
    if flag == 0:
        while (k <=m):
            k*=n 
            cou+=1
            if k == m:
                flag = 1
                break
    if flag == 0:
        while (k-2 >=m):
            k=k-2
            cou+=1
            if k==m:
                flag=1
                break
    if flag == 0:
        while k-1>=m:
            k-=1
            cou+=1
            if k==m:
                flag=1
                break
    print(cou)
