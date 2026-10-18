# import sys
# sys.stdin = open("input.txt")
from collections import deque
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        s=input()
        Q=deque(s)
        stack=[]
        m=Q.popleft()
        stack.append(m)
        while Q :
            if stack :
                x=stack.pop()
                y=Q.popleft()
                if x!=y :
                    stack.append(x)
                    stack.append(y)
            else :
                y=Q.popleft()
                stack.append(y)
        print(f"#{tc+1} {len(stack)}")