import sys
# sys.stdin=open("input.txt","rt")

# 원인 1. 최상위 함수나 if __name__=="__main__": 에선 return 못씀
#         def check() 함수 사용해서 문제풀이

def check(a) :
    # 행,열 검사
    for i in range(9) :
        ch1=[0]*10
        ch2=[0]*10
        for j in range(9) :
            ch1[a[i][j]]=1
            ch2[a[j][i]]=1
        if sum(ch1)!=9 or sum(ch2)!=9 :
            return False

    #3x3행열 검사
    for i in range(3) :
        for j in range(3) :
            ch3=[0]*10
            for k in range(3) :
                for s in range(3) :
                    ch3[a[i*3+k][j*3+s]]=1
            if sum(ch3)!=9 :
                return False
    return True


if __name__ == "__main__" :
    board=[list(map(int,input().split())) for _ in range(9)]

    if check(board) :
        print("YES")
    else :
        print("NO")

