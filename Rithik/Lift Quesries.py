# def calculate(flor):
#     A,B=0,7
    
if __name__ == '__main__':
    t = int(input())
    A,B=0,7
    for i in range(t):
        flor = int(input())
        # calculate(flor)
        if flor-A == B-flor:
            A=flor
            print('A')
        elif flor-A < B-flor:
            A=flor
            print('A')
        elif flor-A > B-flor:
            B=flor
            print('B')
        

    
