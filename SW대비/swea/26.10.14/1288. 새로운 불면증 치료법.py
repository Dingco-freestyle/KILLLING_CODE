# import sys
# sys.stdin = open("input.txt")
def check(n) :
    s=str(n)
    for x in s :
        ch[int(x)]=1
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        ch=[0]*10

        i=1
        k=n
        while True :
            check(k)
            if sum(ch)==10 :
                break
            else :
                i+=1
                k=n*i
        print(f"#{tc+1}",end=" ")
        print(k)