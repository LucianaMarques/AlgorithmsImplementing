##import random
##
##tamanho = 5
##
##A = []
##
##for i in range (tamanho):
##     A.append(random.randint(1,100))

A = [29, 48, 16, 22, 1]

print(A)



def insertTerm(term,lista):
    def insertTerm(term,lista):
    j = 0
    while (j < len(lista) and lista[j] < term):
        j +=1
    print("j = ", j)
    if (j == len(lista)):
        lista.append(term)
        B = lista
    else:
        while (j < len(lista)):
            copy = lista[j]
            lista[j] = term
            term = copy
            j += 1
        lista.append(term)
    print("new list: ", lista)
    return lista
    
    


def insertionSort(A):
    compared = 0
    for compared in range (len(A)):
        print(compared)
        if (compared < len(A) - 1):
            if (A[compared] > A[compared+1]):
                sort = A[compared + 1]
                print("sort ", sort)
                A[compared+1] = A[compared]
                print(A[:compared+1])
                insertTerm(sort, A[0:compared+1])
        else:
            sort = A[compared]
            if (sort < A[compared-1]):
                list2 = insertTerm(sort,A[0:compared+1])
                
                

insertionSort(A)

print(A)
                
                
                    
    
    
