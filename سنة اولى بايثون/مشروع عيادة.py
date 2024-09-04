def back():
    print("المعاينة بـ2000 ريال ")
    while True:
        choose = input("هل يحتاج جهاز (تلفزيون قلب)؟ (y/n)")
        if choose == 'y':
            f1=ECG()
            print(f1)
            choose1 = input("هل تريد جهاز الايكو(y/n)")
            if choose1 == 'y':
                f2=Echo()
                print(f2)
                break
            elif choose1 == 'n':
                print("انتهى الحجز ")
                break
            else:
                print("اخترت حرف ليس موجود في القائمة,أعد المحاولة")

        elif choose == 'n':
            choose1 = input("هل تريد جهاز الايكو(y/n)")
            if choose1 == 'y':
                f2=Echo()
                print(f2)
                break
            elif choose1 == 'n':
                print("انتهى الحجز ")
            break
        else:
            print("اخترت رقم ليس موجود في القائمة,أعد المحاولة")

def first():
    print("المعاينة بـ4000 ريال ")
    while True:
        choose = input("هل يحتاج جهاز (تلفزيون قلب)؟ (y/n)")
        if choose == 'y':
            f1=ECG()
            print(f1)
            choose1 = input("هل تريد جهاز الايكو(y/n)")
            if choose1 == 'y':
                f2=Echo()
                print(f2)
                break
            elif choose1 == 'n':
                print("انتهى الحجز ")
                break
            else:
                print("اخترت حرف ليس موجود في القائمة,أعد المحاولة")

        elif choose == 'n':
            choose1 = input("هل تريد جهاز الايكو(y/n)")
            if choose1 == 'y':
                f2=Echo()
                print(f2)
                break
            elif choose1 == 'n':
                print("انتهى الحجز ")
            break
        else:
            print("اخترت رقم ليس موجود في القائمة,أعد المحاولة")


def ECG():
    print("جهاز التلفزيون بـ5000 ريال ")
    while True:
        money =int(input("ادخل المبلغ    (اذ كنت تريد الخروج ادخل الرقم صفر) "))
        if money==5000:
            print("تم ")
            break
        elif money>5000:
            money_re=money-5000
            print("الباقي لديك ", money_re)
            break
        elif money==0:
            print("الى اللقاء")
            break
        else:
            print("المبلغ الذي ادخلته اقل من 5000 لايسمح له بالتسجيل,أعد المحاولة")
    return "المبلغ المدفوع",money

def Echo():
    print("جهاز الايكو  بـ8000 ريال ")
    while True:
        money1 = int(input("ادخل المبلغ    (اذ كنت تريد الخروج ادخل الرقم صفر) "))
        if money1==8000:
            print("تم ")
            break
        elif money1>8000:
            money_re=money1-8000
            print("الباقي لديك ", money_re)
            break
        elif money1==0:
            break
        else:
            print("المبلغ الذي ادخلته اقل من 8000 لايسمح له بالتسجيل,أعد المحاولة")
    return "المبلغ المدفوع", money1
def add_patient():
    patients = {}
    while True:
        name = input("للتسجيل ادخل الاسم مرة اخرى(اذ كنت تريد الخروج اضغط ع االحرف n) ")
        if name == 'n':
            break
        age = input("ادخل عمر المريض")
        gender = input("حدد جنس المريض")
        patient_info = {
            'age': age,
            'gender': gender

        }
        patients[name] = patient_info
        break

    return patients

def main ():
    patients = open("patients", "r+")
    a = patients.read()
    print("عيادة الدكتور مروان للقلب والباطنية")
    patient_name = input("ادخل اسم المريض ")
    if patient_name in a:
        back()
    else:
        add_patient()
        first()
        patients.write(patient_name)

    patients.close()



passWord="abrar11665"
for i in range(3):
    if i==0:
        print("لديك ثلاث محاولات لادخال كلمة المرور")
        passCon=input("ادخل كلمة المرور")
        if passCon==passWord:
            print("كلمة المرور صحيحه")
            main()
            break
    elif i==1:
        print("لديك محاولتين لادخال كلمة المرور")
        passCon=input("ادخل كلمة المرور")
        if passCon==passWord:
            print("كلمة المرور صحيحه")
            main()
            break
    elif i==2:
        print("لديك محاولة اخيرة لادخال كلمة المرور")
        passCon=input("ادخل كلمة المرور")
        if passCon==passWord:
            print("كلمة المرور صحيحه")
            main()
            break

    