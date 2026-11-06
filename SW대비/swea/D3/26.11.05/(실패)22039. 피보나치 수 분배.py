import sys
sys.stdin=open("input.txt","rt")
from collections import deque

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        if n%3==1 :
            print("impossible")
        elif n%3==2 :
            print("BA"+"BBA"*(n//3))
        else :
            print("BBA"*(n//3))