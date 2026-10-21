import sys
sys.stdin = open("input.txt")
def run(x,y,num) :
    global s,e
    xx = x + dx[num]
    yy = y + dy[num]
    if 0 <= xx < n and 0 <= yy < n:
        s=xx
        e=yy

if __name__ == "__main__":
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    n=int(input())
    rude=list(input().split())
    s,e=0,0
    for x in rude :
        if x=='D' :
            run(s,e,0)
        elif x=='L' :
            run(s,e,1)
        elif x=='U' :
            run(s,e,2)
        elif x=='R' :
            run(s,e,3)
    print(s+1,e+1)