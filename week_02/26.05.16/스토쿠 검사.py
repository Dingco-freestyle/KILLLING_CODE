import sys

from numpy.ma.core import left_shift
# sys.stdin = open("input.txt", "rt")
def check(a) :
    #행,열 검사
    for i in range(9) :
        ch1=[0]*10
        ch2=[0]*10
        for j in range(9) :
            ch1[a[i][j]]=1
            ch2[a[j][i]]=1
        if sum(ch1)!=9 or sum(ch2)!=9 :
            return False

    #3x3
    # 다음 행
    for i in range(3) :
        #다음 열
        for j in range(3) :
            ch3=[0]*10
            # 3x3 행
            for k in range(3) :
                # 3x3 열
                for s in range(3) :
                    ch3[a[i*3+k][j*3+s]]=1
            if sum(ch3)!=9 :
                return False

    return True

a=[list(map(int,input().split())) for _ in range(9)]

if check(a) :
    print("YES")
else :
    print("NO")