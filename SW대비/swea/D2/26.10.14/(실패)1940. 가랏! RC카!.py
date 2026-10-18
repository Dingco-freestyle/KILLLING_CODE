# import sys
# sys.stdin = open("input.txt")

# 두값을 입력받다가 한 값을 입력받을때 list로 받음
if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n=int(input())

        dis=0
        v=0
        for i in range(n) :
            arr=list(map(int,input().split()))
            if arr[0]==1 :
                v=v+arr[1]
                dis+=1*v
            elif arr[0]==2 :
                v=v-arr[1]
                if v<0 :
                    v=0
                dis+=1*v
            else :
                dis+=1*v
        print(f"#{tc+1} {dis}")