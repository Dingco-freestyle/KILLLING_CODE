import sys
# sys.stdin=open("input.txt","rt")

# dict()
# .get(ch,0)+1 : ch라는 값이 없으면 0, 있으면 val+1

if __name__ == "__main__" :
    a=list(input())
    b=list(input())
    x=dict()
    y=dict()

    for ch in a :
        x[ch]=x.get(ch,0)+1
    for ch in b :
        y[ch]=y.get(ch,0)+1

    for i in x.keys() :
        if i in y.keys() :
            if x[i]!=y[i] : #idx 순서가 아니라 key 순서
                print("NO")
                break
        else :
            print("NO")
            break
    else :
        print("YES")