t=int(input())
if t>=1 and t<=100:
   while t>0:
       N=int(input())
       if N>=2 and N<=2**100000:
           if N%2==0:
               print('YES')
           elif (3*N+1)%2==0:
               print('YES')
           else:
               print('NO')
       else:
           print()
       t-=1
else:
   print()
