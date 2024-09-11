print("Exercise 1")
def foo(num):
    print("foo is called with num =", num)
def foo1(num):
    print('foo1() is called with num =', num)

def callFnFromList(myList):
    prev_non_func_parameter = None
    for i in range(len(myList)):
        obj = myList[i]
        if callable(obj):
            obj(prev_non_func_parameter)
        else:
            prev_non_func_parameter = obj

myList = [10, 11, 12, foo, 14, 15, foo, 17, foo]
print(f"callFnFromList(myList)")
callFnFromList(myList)


def callFnFromListWithErrChk(myList):
    prev_non_func_parameter = None
    for i in range(len(myList)):
        obj = myList[i]
        if callable(obj):
            if i > 0:
                obj(prev_non_func_parameter)
        else:
            prev_non_func_parameter = obj

myList = [foo, 10, 11, 12, foo, 14, 15, foo, 17, foo]
callFnFromListWithErrChk(myList)

myList = [foo, 10, 11, 'string', foo, 14, 15, foo, 17, foo]
callFnFromListWithErrChk(myList)

myList = [foo, 10, 11, 'string', foo, 14, 15, foo, 17, foo1]
callFnFromListWithErrChk(myList)

print()
print()

print("Exercise 2")

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