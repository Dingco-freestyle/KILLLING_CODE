# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=list(input())
        s=deque(s)
        stack=[]
        stack.append(s.popleft())
        res=0
        for x in s :
            if stack :
                if stack[-1]=='(' and (x=='|' or x==')') :
                    stack.pop()
                    res+=1
                elif stack[-1]=='|' and x==')' :
                    stack.pop()
                    res+=1
                else :
                    stack.append(x)
            else :
                stack.append(x)
        print(f"#{tc} {res}")