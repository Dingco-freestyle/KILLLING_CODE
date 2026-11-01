import sys
sys.stdin=open("input.txt","rt")
from  itertools import combinations
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        data=list(map(str,input()))
        target=[i for i in range(len(data))]

        min_value,max_value=int(''.join(data)),int(''.join(data))
        for value in combinations(target,2) :
            i,j=value
            data[i],data[j]=data[j],data[i]
            if data[0]=='0' :
                data[i],data[j]=data[j],data[i]
                continue
            if int(''.join(data))<min_value :
                min_value=int(''.join(data))
            if int(''.join(data))>max_value :
                max_value=int(''.join(data))
            data[i],data[j]=data[j],data[i]

        print("#%d %d %d" %(tc+1,min_value,max_value))