import sys
sys.stdin=open("input.txt","rt")
import heapq as hq
# import heapq as hq
# hq.heappop(리스트) : 루트노드 pop
# hq.heappush(리스트,value) : value 값을 트리형태로 push
if __name__ == "__main__" :
    a=[]
    while True :
        n=int(input())

        if n==-1 :
            break
        elif n==0 :
            if len(a)==0 :
                print(-1)
            else :
                print(hq.heappop(a))
        else :
            hq.heappush(a,n)
