# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=input()
        tmp=s[0]
        ch=""
        if tmp!='a' :
            res=0
        else :
            res=1
            for i in range(1,len(s)) :
                if ord(s[i])==ord(tmp)+1 :
                    res+=1
                else :
                    break
                tmp = s[i]
        print(f"#{tc} {res}")
