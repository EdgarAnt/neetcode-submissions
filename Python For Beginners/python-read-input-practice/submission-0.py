def add_two_numbers() -> int:
    line=input()
    lista=list(line.split(","))
    Ent=[]
    for elements in lista:
        Ent.append(int(elements))
    return sum(Ent)


# do not modify below this line
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
