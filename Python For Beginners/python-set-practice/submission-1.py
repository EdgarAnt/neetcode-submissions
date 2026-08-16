from typing import List

def contains_duplicate(words: List[str]) -> bool:
    my_set=set()
    for a in words:
        for b in my_set:
            if a==b:
                return True
        my_set.add(a)
    return False
                
    

# do not modify code below this line
print(contains_duplicate(["hello", "world", "hello"]))
print(contains_duplicate(["hello", "world", "i", "am", "great"]))
print(contains_duplicate(["hello", "hello", "hello"]))
print(contains_duplicate(["Hello", "hellooo", "hello"]))
