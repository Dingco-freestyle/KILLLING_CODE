import sys
sys.stdin=open("input.txt","rt")
from collections import deque

# list.pop(0) vs deque.popleft() : 시간복잡도 차이
# list.pop(0)는 pop하고 나머지 원소를 앞으로 당겨야 하므로 O(n)
# deque.popleft()는 앞뒤로 삭제 가능하므로 O(1)

if __name__=="__main__" :
    n,k=map(int,input().split())
    queue=[i for i in range(1,n+1)]
    queue=deque(queue)

    while True :
        if len(queue)==1 :
            res=queue.pop()
            print(res)
            break

        for i in range(k-1) :
            a=queue.popleft()
            queue.append(a)
        queue.popleft()