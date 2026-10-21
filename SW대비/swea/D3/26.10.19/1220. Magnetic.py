# import sys
# sys.stdin = open("input.txt")
from collections import deque
if __name__=="__main__" :
    for tc in range(1,11) :
        n=int(input())
        board=[list(map(int,input().split())) for _ in range(n)]
        Q=deque()
        stack=[]
        res=0
        for i in range(n) :
            Q = deque()
            stack = []
            for j in range(n) :
                if board[j][i]==1 or board[j][i]==2 :
                    Q.append(board[j][i])
            while Q[0]==2 :
                Q.popleft()
            while Q[-1]==1 :
                Q.pop()
            while Q :
                m=Q.popleft()
                if stack :
                    if m==2 :
                        if stack[-1]==1 :
                            stack.pop()
                            res+=1
                else :
                    if m==1 :
                        stack.append(m)
        print(f"#{tc} {res}")