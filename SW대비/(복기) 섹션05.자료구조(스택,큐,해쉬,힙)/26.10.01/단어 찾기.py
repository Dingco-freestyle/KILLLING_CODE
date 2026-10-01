import sys
sys.stdin=open("input.txt","rt")

# dict() : 딕셔너리
# p.items() : 딕셔너리의 (key, value) 쌍을 튜플 형태로 꺼내주는 메서드
# enumerate는 (idx, val)
# .items()는 (key,val)

# deque를 사용해서 not in으로 풀었는데 딕셔너리가 더 빠름
# not in,in은 리스트를 한번 탐색해야해서 O(N)

if __name__=="__main__" :
    n=int(input())
    p=dict()
    for i in range(n) :
        word=input()
        p[word]=1

    for i in range(n-1) :
        word=input()
        p[word]=0

    for key,val in p.items() :
        if val==1 :
            print(key)
