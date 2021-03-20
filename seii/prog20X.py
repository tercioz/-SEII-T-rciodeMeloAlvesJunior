try:
    f = open('curruptfile.txt')
except IOError as e:
    print('primeiro')
except Exception as e:
    print('segundo')
else:
    print(f.read())
    f.close()
finally:
    print("finalmente")

print('é isso ai')