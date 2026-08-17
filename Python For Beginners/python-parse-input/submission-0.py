from typing import List

def read_integers() -> List[int]:
    line=input()
    lista=list(line.split(","))
    listaInt=[]
    for elements in lista:
        listaInt.append(int(elements))
    
    return listaInt

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
