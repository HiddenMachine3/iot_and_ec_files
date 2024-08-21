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