import sys
sys.stdin=open("input.txt","rt")
password=['1011000','1001100','1100100','1011110','1100010','1000110','1111010','1101110','1110110','1101000']
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        N,M=map(int,input().split())
        output=-1

        for n in range(N) :
            line=input()
            if int(line)!=0 and output==-1 :
                line=str(int(line[::-1]))
                data=[]
                for i in range(8) :
                    data.insert(0,password.index(line[7*i:7*i+7]))
                solve=(data[0]+data[2]+data[4]+data[6])*3+data[1]+data[3]+data[5]+data[7]

                if solve % 10 ==0 :
                    output=sum(data)
                else :
                    output=0
        print(f"#{tc+1} {output}")