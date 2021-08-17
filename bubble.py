
def bubbleSort(array):
    swapped = false
    for i in range(len(array)-1,0,-1):
        for j in range(i):
            if array[j]>array[j+1]:
                array[j],array[j+1] = array[j+1], array[j]
                swapped = true
            if swapped:
                swapped = false
            else:
                break
            return array

