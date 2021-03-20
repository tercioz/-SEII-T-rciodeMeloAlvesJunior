def circ(raio):
    return 2*3.14*raio
def area(base, altura):
    return base*altura
print(circ(2))
print(area(2,4))
def entender(*curs,**abc):
    print(curs)
    print(abc)
course={'nome':'jhon','idade':22}
entender(*course, **course)