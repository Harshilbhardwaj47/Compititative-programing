def cal(l):
    count = 0
    data = []
    for i in l:
        if '#' in i:
            count = count+1
        else:
            pass
        data.append(count)
    result = []
    result.append(max(data))
    return result


if __name__ == '__main__':
    t = int(input())
    l = []
    m = []
    for i in range(t):
        row,col = input().split()
        for j in range(int(row)):
            inp = input()[:int(col)]
            l.append(inp)
        m.append(cal(l))
    print(*m,sep="\n")
