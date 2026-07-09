import sys

# sys.stdin = open("input.txt", "rt")

def DFS(v) :
    if v>7 :
        return
    else :
        #print(v,end=" ") # preorder()
        DFS(v*2)
        print(v,end=" ") #inorder()
        DFS(v*2+1)
        #print(v,end=" ") #postorder()

if __name__=="__main__" :
    DFS(1)