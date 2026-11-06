# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=input()
        win=0
        lose=0
        for x in s :
            if win>=8 :
                break
            if lose>=8 :
                break
            if x=='o' :
                win+=1
            else :
                lose+=1
        if lose>=8 :
            res="NO"
        else :
            res="YES"
        print(f"#{tc} {res}")