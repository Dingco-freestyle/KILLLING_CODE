import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n,pd,pg=map(int,input().split())

        if pd!=0 and pg==0 :
            res="Broken"
        elif pd!=100 and pg==100 :
            res="Broken"
        else :
            flag=0
            for i in range(1,n+1) :
                if (i*pd)/100 == (i*pd)//100 :
                    flag=1
                    break
            if flag :
                res="possible"
            else :
                res="broken"
        print(res)
