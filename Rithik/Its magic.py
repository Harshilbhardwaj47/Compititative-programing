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