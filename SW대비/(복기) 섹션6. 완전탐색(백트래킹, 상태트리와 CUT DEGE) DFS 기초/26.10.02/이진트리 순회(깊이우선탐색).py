import sys
sys.stdin=open("input.txt","rt")
def preorder(num) :
    if num>=len(tree) :
        return

    print(tree[num],end=" ")
    preorder(num*2)
    preorder(num*2+1)
def inorder(num) :
    if num>=len(tree) :
        return

    inorder(num*2)
    print(tree[num],end=" ")
    inorder(num*2+1)
def lastorder(num) :
    if num>=len(tree) :
        return

    lastorder(num*2)
    lastorder(num*2+1)
    print(tree[num],end=" ")
if __name__=="__main__" :
    tree=[0,1,2,3,4,5,6,7]
    preorder(1)
    print()
    inorder(1)
    print()
    lastorder(1)