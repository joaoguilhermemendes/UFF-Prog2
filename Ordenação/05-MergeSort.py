def merge_sort(list):
    length = len(list)

    if length == 1:
        return list

    mid = length // 2

    left = merge_sort(list[:mid]) #Divindo pela metade do início até o meio
    right = merge_sort(list[mid:]) #Dividindo pela metade do meio até o fim
    
    '''
    [a, b, c, d, e, f, g, h]
    [a, b, c, d] - [e, f, g, h]
    [a, b] -  [c, d] - [e, f] - [g, h]
    [a] - [b] - [c] - [d] - [e] -[f] -[g] -[h]
    
    [a]
    [b]
    [c]
    [d]
    [a, b]
    [d, c]
    
    [e]
    [f]
    [g]
    [h]
    [e, f]
    [g, h]
    
    [d, a, c, b] - left
    [g, e, f, h] - right
    
    '''

    return merge(left, right) 

def merge(left, right):
    output = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]: 
            output.append(left[i]) 
            i += 1
        else:
            output.append(right[j])
            j += 1
    
    '''Obviamente, o i ou o j irá findar um antes do outro e a comparação não será mais necessária, a partir daí, 
    basta adicionar o resto do outro vetor (ques já está ordenado entre ele)'''
    output.extend(left[i:]) # adiciona todos os elementos restantes de left[i:] em output
    output.extend(right[j:]) # adiciona todos os elementos restanes de right[j:] em output

    return output


def main():
    unsorted = [25, 48, 37, 12, 57, 86, 33, 92]
    sorted = merge_sort(unsorted)
    print("sorted: ")
    print(sorted)

main()