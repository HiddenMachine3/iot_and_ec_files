def fillMyMatrixInt(myMaxtrix):
    curren_matrix = myMaxtrix

    if type(curren_matrix) is list and type(curren_matrix[0]) is not list:
        for i in range(len(curren_matrix)):
            curren_matrix[i] = 1
    else:
        for i in range(len(curren_matrix)):
            fillMyMatrixInt(curren_matrix[i])


matrix = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
print("matrix before :", matrix)
fillMyMatrixInt(matrix)
print("matrix after :", matrix)