me={'Nome':'Tércio','Age':21,'profissão':'Intern','habilidade':'nenhuma habilidade'}
print(me.get('habilidade'))
me['habilidade']='alguma'
print(me.get('habilidade'))

print(me.keys())
del me
