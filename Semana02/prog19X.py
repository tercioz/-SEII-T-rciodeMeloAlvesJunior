  
from operator import attrgetter

e1 = ('tercio', 20, 1000)
e2 = ('marquinhos', 25, 2000)
e3 = ('Jonataj', 25, 90000)

employees = [e1, e2, e3]

s_employees = sorted(employees. key=attrgetter('age'))
print(s_employees)