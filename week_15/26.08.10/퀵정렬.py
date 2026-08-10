import sys
sys.stdin=open("input.txt","rt")

def Qsort(lt,rt) :
    if lt<rt :
        pivot=arr[rt]
        pos=lt

        for i in range(lt,rt) :
            if arr[i]<=pivot :
                arr[i],arr[pos]=arr[pos],arr[i]
                pos+=1

        arr[rt],arr[pos]=arr[pos],arr[rt]

        Qsort(lt,pos-1)
        Qsort(pos+1,rt)

if __name__ == "__main__" :
    arr = [45, 21, 23, 36, 15, 67, 11, 60, 20, 33]
    print(arr)

    Qsort(0, 9)  # 퀵정렬
    print()
    print(arr)