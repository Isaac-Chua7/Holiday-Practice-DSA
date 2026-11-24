def main():

    v = [83, 57, 28, 95, 38, 58, 95, 29]

    quicksort(v, 0, len(v)-1)

    for num in v:
        print(num)

    return 0

def quicksort(v, start, end):
    #base case
    if end <= start:
        return
    
    pivot = partition(v, start, end)

    quicksort(v, start, pivot-1)
    quicksort(v, pivot+1, end)

def partition(v, start, end):
    pivot = end

    i = start-1

    for j in range(start, end):
        if v[j] < v[pivot]:
            i += 1

            #swap v[i] v[j]
            temp = v[i]
            v[i] = v[j]
            v[j] = temp

    #swap pivot into final spot
    i += 1
    temp = v[i]
    v[i] = v[end]
    v[end] = temp

    return i

if __name__ == "__main__":
    main()