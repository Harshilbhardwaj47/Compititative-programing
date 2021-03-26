def lob(l):

    s = ["a", "e", "i", "o", "u"]
    s1 = ["A", "E", "I", "O", "U"]
    count = 0
    for i in l:
        for j in s:
            if j in i:
                count = 1
                continue
            else:
                count = 0
                break
        if count == 0:
            for k in s1:
                if k in i:
                    count = 1
                    continue
                else:
                    count = 0
                    break
        if count == 0:
            print("ugly string")
        else:
            print("lovely string")
            



if __name__ == '__main__':
    
    t = int(input())
    l = []
    for i in range(t):
        inp = input()
        l.append(inp)
    lob(l)
