# import sys
# sys.stdin=open("input.txt")
INF=int(1e9)
import heapq

# 다익스트라 알고리즘
def dijkstra(start) :
    distance[start]=0
    q=[]
    heapq.heappush(q,(0,start))
    while q :
        dist,now=heapq.heappop(q)
        if distance[now]<dist :
            continue
        for i in graph[now] :
            cost=dist+i[1]
            if cost<distance[i[0]] :
                distance[i[0]]=cost
                heapq.heappush(q,(cost,i[0]))
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        v,e=map(int,input().split())
        graph = [[] for _ in range(v+1)]
        distance=[INF]*(v+1)
        for i in range(e) :
            a,b=map(int,input().split())
            graph[a].append((b,1))

        s,g=map(int,input().split())
        dijkstra(s)
        if distance[g]>=INF :
            res=0
        else :
            res=1
        print(f"#{tc+1} {res}")

# # 플로이드 워셜
# if __name__=="__main__" :
#     t=int(input())
#     for tc in range(t) :
#         v,e=map(int,input().split())
#         graph = [[INF] * (v+1) for _ in range(v+1)]
#
#         for i in range(v+1) :
#             for j in range(v+1) :
#                 if i==j :
#                     graph[i][j]=0
#
#         for i in range(e) :
#             a,b=map(int,input().split())
#             graph[a][b]=1
#
#         for k in range(1,v+1) :
#             for i in range(1,v+1) :
#                 for j in range(1,v+1) :
#                     graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j])
#         s,g=map(int,input().split())
#         if graph[s][g]>=INF :
#             res=0
#         else :
#             res=1
#         print(f"#{tc+1} {res}")