
#
grid=[]
rows=2
cols=3
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(0)
    grid.append(row)
print(grid)
#

grid = [[1, 2], [3, 4], [5, 6]]
y=[]
for elem in grid:
    for in_lem in elem:
        y.append(in_lem)
print(y)
#
nums = [1, 2, 3, 4]
y=[]
for i in nums:
    j=i**2
    x=(i,j)
    y.append(x)
print(y)
#
a = [1, 2, 3]
b = [4, 5, 6]
y_sum=[]
for i in range(len(a)):
    i_sum=a[i]+b[i]
    y_sum.append(i_sum)
print(y_sum)
y_mul=[]
for i in range(len(a)):
    i_mul=a[i]*b[i]
    y_mul.append(i_mul)
print(y_mul)
#
value_list=[]
items = [1, None, "hello", "", 0, "world", None]
for i in items:
    if  i!= None and i!="":
        value_list.append(i)
print(value_list)
#
nums = [5, 1, 9, 6, 9, 3]
set_nums=set(nums)
list_set_nums=list(set_nums)
sorted_list=sorted(list_set_nums)
print(sorted_list[-2])
#
nums = [1, 2, 2, 3, 3, 3]
freq=[]
from collections import Counter
freq=Counter(nums)
print(dict(freq))
#
marks = int(input("Enter marks (0-100): "))

match marks:
    case m if 90<=m<=100:
        print("Grade: A")
    case m if 80 <= m < 90:
        print("Grade: B")
    case m if 70 <= m < 80:
        print("Grade: C")
    case m if 60 <= m < 70:
        print("Grade: D")
    case m if 0 <= m < 60:
        print("Grade: F")
    case _:
        print("Invalid marks")
#
def sum_of_elem(lst,i=0):
    if i == len(lst):
        return 0
    else:
        return lst[i]+sum_of_elem(lst,i+1)
print(sum_of_elem([1,2,3,4,5]))
#


        