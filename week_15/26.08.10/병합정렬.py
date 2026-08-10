import sys
sys.stdin=open("input.txt","rt")

def Dsort(lt,rt) :
    if lt<rt :
        mid=(lt+rt)//2
        Dsort(lt,mid) #왼
        Dsort(mid+1,rt) #오

        # 본연의 일
        p1=lt
        p2=mid+1
        tmp=[]

        while p1<=mid and p2<=rt :
            if arr[p1]<arr[p2] :
                tmp.append(arr[p1])
                p1+=1
            else :
                tmp.append(arr[p2])
                p2+=1
        if p1<=mid :
            tmp=tmp+arr[p1:mid+1] #나머지 더하기
        if p2<=rt :
            tmp=tmp+arr[p2:rt+1] #나머지 더하기

        for i in range(len(tmp)) :
            arr[lt+i]=tmp[i]
if __name__ == "__main__" :
    arr=[23,11,45,36,15,67,33,21]
    print(arr)

    Dsort(0,7) # 병합정렬
    print()
    print(arr)