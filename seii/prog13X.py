import csv
with open('nome.csv','r') as csv_file:
    csv_reader=csv.reader(csv_file)
    for line in csv_file:
        print(line)