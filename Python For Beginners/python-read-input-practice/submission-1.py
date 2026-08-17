def add_two_numbers() -> int:
    line=input()
    lista=list(line.split(","))
    
    sum1=int(lista[0])
    sum2=int(lista[1])

    return sum1+sum2


# do not modify below this line
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
