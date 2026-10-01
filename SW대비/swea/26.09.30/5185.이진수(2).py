import sys
sys.stdin=open("input.txt","rt")
def ten_to_binary(n) :
    ans=''
    for i in range(4) :
        ans=str(n%2)+ans
        n=n//2
    return ans

def hex_to_binary(s) :
    ans=''
    for x in s :
        if x.isdigit() : # 문자열이 숫자문자인지 판단
            ans+=ten_to_binary(int(x))
        else :
            ans+=ten_to_binary(hex_c[x])
    return ans

if __name__ == "__main__" :
    t=int(input())

    hex_c={'A':10, 'B':11, 'C':12,'D':13,'E':14,'F':15}
    # 딕셔너리
    for i in range(t) :
        n,s=input().split()

        print("#%d %s" %((i+1), hex_to_binary(s)))
