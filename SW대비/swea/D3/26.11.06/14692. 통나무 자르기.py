# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        if n%2==0 :
            res="Alice"
        else :
            res="Bob"
        print(f"#{tc} {res}")