import sys
# sys.stdin=open("input.txt","rt")
# 스택(LIFO)
# 리스트랑 같음. 그래서 파이썬에서는 리스트로 스택을 사용
if __name__=="__main__" :
    k,m=map(int,input().split())
    k=list(map(int,str(k))) #int로 받은 정수를 문자열로 변환해서 리스트화
    stack=[] #스택은 리스트

    for x in k :
        while stack and m>0 and stack[-1]<x :
            stack.pop()
            m-=1
        stack.append(x)

    if m!=0 :# 제거횟수가 남았을 때는 맨뒤값을 남은 수 만큼 제거
        stack=stack[:-2] # 리스트 뒤에 자르기
    res=''.join(map(str,stack)) # 리스트를 스트링화화
    print(res)