n=int(input())
for t in range(n):
    l, b = map(int, input().split())
    m = input()
    max = 0
    stg = ""
    list=[k for k in m]
    if int(m) < b:
        print(m)
    else:
        for i in range(len(list)):
            list.remove(list[i])
            for j in list:
                stg+=j
            new=int(stg)%b
            if  new > max:
                max=new
            list = [k for k in m]
            stg=""
        print(max)
