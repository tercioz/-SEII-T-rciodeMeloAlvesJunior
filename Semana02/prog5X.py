me={'Nome':'Tércio','Age':21,'profissão':'Intern','habilidade':'nenhuma habilidade'}
print(me.get('nao sei', 'não existe'))
print(me.items())
for key,value in me.items():
    print(key , value)
    print('serio que isso usa identação pra for?')
print('fora do for')