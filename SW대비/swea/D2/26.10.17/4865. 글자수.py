# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t) :
        str1=input()
        str2=input()
        cnt=0
        res=[]
        for x in str1 :
            cnt=0
            for y in str2 :
                if x==y :
                    cnt+=1
            res.append(cnt)
        print(f"#{tc+1} {max(res)}")