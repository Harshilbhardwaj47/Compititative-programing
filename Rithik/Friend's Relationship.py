if __name__ == '__main__':
    t = int(input())
    while t>0:
        t-=1
        n = int(input())
        n*=2
        for i in range(1,n):
            n-=2
            print('*'*i +'#'*n+'*'*i)
            if n <1:
                break
            
            
            
