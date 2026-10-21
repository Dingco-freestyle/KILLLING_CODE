import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    ch=[(2,-1),(2,1),(-1,2),(1,2),(-2,1),(-2,-1),(1,-2),(-1,-2)]

    board=[[0]*8 for _ in range(8)]
    s=list(input())
    col=int(ord(s[0])-ord('a'))
    row=int(s[1])-1
    res=0
    for x in ch :
        next_row=row+x[0]
        next_col=col+x[1]

        if 0<=next_row<8 and 0<=next_col<8 :
            res+=1
    print(res)