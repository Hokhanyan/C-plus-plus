

def quikSorrt(array):
    if len(array > 1):
            pivot = array.pop()
            grtr_lst, equal_lst, smlr_lst = [], [pivot], []
            for item in array:
                if item ==pivot:
                    equal_lst.append(item)
                elif item > pivot:
                    grtr_lst.append(item)
                else:
                    smlr_lst.append(item)
        return (quikSort(smlr_lst) + equal_lst + quik_sort(grtr_lst))
    else:
         return array


