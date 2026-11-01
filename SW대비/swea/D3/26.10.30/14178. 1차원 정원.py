import sys
sys.stdin = open("input.txt", "rt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(1, t + 1):
        n, d = map(int, input().split())
        stack=[]
        res=0
        while True :
            if sum(stack)>=n :
                break
            for i in range(2*d+1) :
                stack.append(1)
            res+=1
        print(f"#{tc} {res}")