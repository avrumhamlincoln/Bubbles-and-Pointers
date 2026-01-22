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
    step = 0
    for i in values:
        values[step] = x
        values[step + 1] = y
        
        if x > y:
            swap()
            step += 1

        else:
            step += 1
    

swap():
    temp = 0
    x = temp
    x = y
    y = temp
