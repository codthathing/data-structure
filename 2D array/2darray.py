
# Two - dimension array traversal row major of n-row & n-column
row = eval(input("\nHow many row: "))
column = eval(input("How many column: "))
row_array = []

for i in range(row):
  column_array = []
  for j in range(column):
    array_item = input("Input item: ")
    column_array.insert(j, array_item)
  row_array.insert(i, column_array)

print(row_array)

# Two - dimension array insertion row major of n-row & n-column
insert_pos = eval(input("\nWhat position do you want to insert: "))
for i in range(row, insert_pos - 1):
  row_array.insert(i, row_array[i - 1])

new_array = []
for i in range(column):
  new_array_item = input("Enter new array items: ")
  new_array.insert(i, new_array_item)

row_array.insert(insert_pos - 1, new_array)

print(row_array)

# Two - dimension array deletion row major of n-row & n-column  