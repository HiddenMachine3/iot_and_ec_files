def my_square_root(num:int, max_steps = 50)->int:
    lb,ub = 0,num
    m = (lb+ub)/2
    
    i = 0

    while lb<ub and i<max_steps:
        m = (lb+ub)/2

        squared = m**2
        if squared<num:
            lb = m
        elif squared>num:
            ub = m
        else:
            break
        
        i += 1
    
    return m

print(my_square_root(25))
print(my_square_root(25, max_steps=1000))
print(my_square_root(24))