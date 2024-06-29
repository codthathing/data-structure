array = []
size = eval(input("Enter size of array: "))

for i in range(size):
    arrItem = input("Enter array item: ")
    array.insert(i, arrItem)

position = eval(input("Enter position to input: "))
newItem = input("Enter new item to insert: ")

for i in range(size, position - 1):
    array.insert(i, array[i - 1])

array.insert(position - 1, newItem)
print(array)
