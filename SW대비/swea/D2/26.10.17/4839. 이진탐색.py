# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        p,a,b=map(int,input().split())
        lt=1
        rt=p
        cnt=1
        while lt<=rt :
            mid=(lt+rt)//2
            if mid==a :
                res_a=cnt
                break
            else :
                if mid<a :
                    lt=mid
                else :
                    rt=mid
                cnt+=1
        lt = 1
        rt = p
        cnt = 1
        while lt <= rt:
            mid = (lt + rt) // 2
            if mid == b:
                res_b = cnt
                break
            else:
                if mid < b:
                    lt = mid
                else:
                    rt = mid
                cnt += 1
        print(f"#{tc+1}",end=" ")
        if res_a<res_b :
            print('A')
        elif res_a>res_b :
            print('B')
        else :
            print(0)
