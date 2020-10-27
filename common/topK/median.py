"""
中位数

"""


def partition(arr, low, high):
    i = low - 1
    pivot = arr[high]
    for j in range(low, high):
        if arr[j] < pivot:
            i = i + 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1


def median(arr, low, high, med):
    if low < high:
        p = partition(arr, low, high)
        print(p, low, high)
        if p > med:
            median(arr, low, p - 1, med)
        elif p < med:
            median(arr, p + 1, high, med)
        else:
            a = p
            return
    else:
        a = low
        return


arr = [10, 7, 8, 9, 1, 5, 100]
n = len(arr)
med = int(n / 2)
print(med)
median(arr, 0, n - 1, med)
print("---")
print(arr)




