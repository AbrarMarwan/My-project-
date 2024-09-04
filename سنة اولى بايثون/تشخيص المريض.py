list=[]
for y in range(2):
    name = input(f"Enter the patient's name{y+1}:")
    age = int(input("Enter the patient's age:"))
    address = input("Enter the patient's address:")
    dic = {'name': name, 'age': age, 'address': address}
    print("Enter the values in number")
    bload = int(input("how high blood level?"))
    heart = int(input("how many heart beats?"))
    pressure = int(input("how many venous pressure level?"))
    dic.update({'bload': bload, 'heart': heart, 'pressure': pressure})
    list.append(dic)
    if bload < 4:
        if heart < 4:
            if pressure < 4:
                print("خطير ,يرجى التوجه الى أقرب مشفى")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("خطير ,يرجى التوجه الى أقرب مشفى")
        elif heart >= 4 and heart <= 6:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("خطير ,يرجى التوجه الى أقرب مشفى")
        elif heart > 6:
            if pressure < 4:
                print("خطير ,يرجى التوجه الى أقرب مشفى")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("خطير ,يرجى التوجه الى أقرب مشفى")
    elif bload >= 4 and heart <= 6:
        if heart < 4:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
        elif heart >= 4 and heart <= 6:
            if pressure < 4:
                print("سليم")
            elif pressure >= 4 and pressure <= 6:
                print("سليم")
            elif pressure > 6:
                print("سليم")
        elif heart > 6:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
    elif heart > 6:
        if heart < 4:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
        elif heart >= 4 and heart <= 6:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
        elif heart > 6:
            if pressure < 4:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure >= 4 and pressure <= 6:
                print("احتمال,ينصح بالذهاب الى الطبيب")
            elif pressure > 6:
                print("خطير ,يرجى التوجه الى أقرب مشفى")

for i in range(len(list)) :
    for k,v in list[i].items():
        print(k,">>",v)

