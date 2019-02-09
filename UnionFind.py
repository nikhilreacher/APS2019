def find(arr,a,b):
    if(root(arr,a) == root(arr,b)):
        return 1
    else:
        return 0

def root(arr,i):
    while(i != arr[i]):
        i = arr[i]
    return i

def UnionMode(arr,a,b):
    r_a = root(a)
    r_b = root(b)
    arr[r_a] = r_b
    
def UnionFindMod(n):
    arr = []
    for i in range(n):
        arr.append(i)
    UnionMode(arr,1,0)
    UnionMode(arr,0,2)
    UnionMode(arr,3,4)
    UnionMode(arr,1,4)
    #for n=6, Result-- 2,0,4,4,4,5
    status = find(3,5)
    print(status)


UnionFindMod(6)