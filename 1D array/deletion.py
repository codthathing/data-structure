array = []
size = eval(input("Enter size of array: "))

for i in range(size):
    arrItem = input("Enter array item: ")
    array.insert(i, arrItem)

position = eval(input("Enter position to delete: "))
for i in range(position - 1, size - 1):
    array.insert(i, array[i + 1])
    # array[i] = array[i + 1]

print(array)