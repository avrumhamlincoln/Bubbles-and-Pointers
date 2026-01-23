### This program will take an array of numbers then, compare and swap the values to create a sorted array.

```
main():
    init values [1 - 9]
    print(values before)

    sort()
    print(values after one passthrough of sort)
    
printValues():
    for i in values:
        print(i, space)

sort():
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)
    

swap():
    temp = x
    x = y
    y = temp
