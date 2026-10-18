import sys
sys.stdin = open("input.txt")
# 파스칼 (이항계수 공식)
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        for i in range(1,n+1) :
            res = [1] * i
            for j in range(1,i) :
                res[j]=(res[j-1]*(i-j))//j ##
            for x in res :
                print(x,end=" ")
            print()
        print()