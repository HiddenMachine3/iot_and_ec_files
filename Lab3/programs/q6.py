a = [[1,2,3], [4,5,6], [7,8,9]]

array = [a[i][j] for i in range(len(a)) for j in range(len(a[i]))]

print(array)