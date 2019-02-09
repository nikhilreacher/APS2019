def lis():
    arr = list(map(int,input().rstrip().split()))
    aux = []
    for i in range(len(arr)):
        aux.append(1)
    for i in range(len(arr)):
        for j in range(i):
            if(arr[i] > arr[j] and aux[j] + 1 > aux[i]):
                aux[i] += 1
    print(aux)
lis()
