# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        s=input()
        bit=[]
        res=0
        for x in s :
            bit.append(int(x))
        while sum(bit)!=0 :
            for i in range(len(bit)) :
                if bit[i]==1 :
                    idx=i
                    break

            for i in range(idx,len(bit)) :
                if bit[i]==1 :
                    bit[i]=0
                else :
                    bit[i]=1
            res+=1
        print(f"#{tc+1} {res}")

