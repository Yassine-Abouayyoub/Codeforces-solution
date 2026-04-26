n = int(input())
les_chaines=[]

for i in range(n):
    chaine = input()
    lenght = len(chaine)

    if(lenght>10):
        chaine = chaine[0] + str(lenght - 2) + chaine[lenght-1]
        les_chaines.append(chaine)
    else:
        les_chaines.append(chaine)

for i in range(n):
    print(les_chaines[i])
    