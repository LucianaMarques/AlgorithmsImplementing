A = [29, 48, 16, 22, 1]

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

insertTerm(16, A[0:2])


