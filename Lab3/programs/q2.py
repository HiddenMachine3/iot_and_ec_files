def myFunc():
    print("myFunc is executing")
    print("myFunc is also executing")


list_of_objects = [1, 2, myFunc]

for obj in list_of_objects:
    if callable(obj):
        obj()