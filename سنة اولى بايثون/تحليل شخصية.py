print("اهلاً بكم في برنامج تحليل الشخصية *_^")
name=input("ادخل اسمك :")
def quiz1 ():
    global sum
    print("أجب عن الاسئلة بصدق وماتشعر به.")
    print("س1: عندما ترغب بالاسترخاء, فستكون طريقة جلوسك ")
    print("1) مع تقاطع القدمين, إحداهما فوق الاخرى \n2) تجلس مع ثني الركبتين جنباً الى جنب"
          "\n3) مع مد الرجلين بشكل مستقيم \n4)مع ثني رجل واحدة تحتك ")
    while True:
        choose =int( input("ادخل الحرف الذي اخترته :"))
        if choose ==1:
            sum = 6
            break
        elif choose == 2:
            sum = 4
            break
        elif choose == 3:
            sum = 2
            break
        elif choose == 4:
            sum = 1
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س2: عند مقاطعة الاخرين لك اثناء التركيز الشديد,فإنك ")
    print("1)ترحب بالمقاطعة من اجل أخذ قسط من الراحة \n2)تشعر بالغيظ الشديد"
          " \n3)تشعر بالحالة الوسط بين الحالتين السابقيتن ")
    while True:
        choose =int(input("ادخل الحرف الذي اخترته :"))
        if choose ==1:
            sum = sum+6
            break
        elif choose == 2:
            sum = sum+2
            break
        elif choose == 3:
            sum = sum+4
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س3: ماهو الوقت الذي تشعر قيا بأنك في افضل حالاتك ")
    print("1)في الصباح الباكر \n2(في الظهيرة وبداية المساء")
    while True:
        choose = int(input("ادخل الحرف الذي اخترته :"))
        if choose == 1:
            sum = sum + 2
            break
        elif choose == 2:
            sum = sum + 4
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س4:ماهو اللون المفضل لديك ")
    print("1) الاحمر او البرتقالي \n2(الاسود \n3(الاصفر او الازرق الفاتح \n 4)الاخضر "
          "\n5)الازرق الغامق او الارجواني \n6(الابيض \n7)البني او الرمادي")
    while True:
        choose = int(input("ادخل الحرف الذي اخترته :"))
        if choose == 1:
            sum = sum + 6
            break
        elif choose == 2:
            sum = sum + 7
            break
        elif choose == 3:
            sum = sum + 5
            break
        elif choose == 4:
            sum = sum + 4
            break
        elif choose == 5:
            sum = sum + 3
            break
        elif choose == 6:
            sum = sum + 2
            break
        elif choose == 7:
            sum = sum + 1
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س5:كيف تسير على قدميك, أو ماهي شكل مشيتك")
    print("1)تمشي يشكل سريع وبخطوات سريعة \n2)بشكل سريع وبخطوات قصيرة"
          " \n3)بسرعة قليلة مع طاطاة الرأس نحو الاسفل \n"
          "4)تتحرك بشكل بطيء جداً \n5(تتحرك بسرعة قصيرة مع رفع الرأس, والنظر إلى وجوه الناس")
    while True:
        choose = int(input("ادخل الحرف الذي اخترته :"))
        if choose == 1:
            sum =sum+6
            break
        elif choose == 2:
            sum =sum+4
            break
        elif choose == 3:
            sum = sum+2
            break
        elif choose == 4:
            sum = sum+1
            break
        elif choose == 5:
            sum = sum+7
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س6:عندما تتحدث ممع الاخرين ")
    print("1)تقف طاوي اليدين \n2) تقف ويداك مكتوفتان \n3)تقف مع وضع يديك داخل الجيب \n4)تلمس الشخص المخاطب,او تدفعه \n"
          "4)تحريك اليدين على عدد من احزاء جسمك مثل : الشعر أو الدقن ")
    while True:
        choose = int(input("ادخل الحرف الذي اخترته :"))
        if choose == 1:
            sum =sum+4
            break
        elif choose == 2:
            sum =sum+2
            break
        elif choose == 3:
            sum = sum+5
            break
        elif choose == 4:
            sum = sum+7
            break
        elif choose == 5:
            sum = sum+6
            break
        else:
            print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س7:عند الاستعداد للنوم,تكون طريقة استلقاءك")
    print("1)التمدد على الظهر \n2)الانكفاء على البطن والوجه باتجاه الارض\n"
          "3)الاستلقاء على احد الجانبين \n4)وضع الراس على إحدى اليدين \n5) إخفاء الراس اسفل الغطاء")
    while True:
     choose = int(input("ادخل الحرف الذي اخترته :"))
     if choose == 1:
        sum = sum +7
        break
     elif choose == 2:
        sum = sum +6
        break
     elif choose == 3:
        sum = sum +4
        break
     elif choose == 4:
        sum = sum +2
        break
     elif choose == 5:
        sum = sum +1
        break
    else:
        print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س8:الحلم الذي يتكرر معك ")
    print("1)السقوط من مكان مرتفع \n2)القتال أو المقاومة \n3)البحث عن شخص أو شي\n"
          "4)الطيران أو الطفو على الماء \n5)عدم الحلم بشيء عند النوم")
    while True:
     choose = int(input("ادخل الحرف الذي اخترته :"))
     if choose == 1:
        sum = sum +4
        break
     elif choose == 2:
        sum = sum +2
        break
     elif choose == 3:
        sum = sum +3
        break
     elif choose == 4:
        sum = sum +5
        break
     elif choose == 5:
        sum = sum + 1
        break
     else:
        print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س9:عندما تسمع شي مضحك,تضحك ")
    print("1)بشكل ممتن \n2)ليس بصوت مرتفع \n3)بشكل هادى بينك وبين نفسك \n"
          "4)بشكل خجول ")
    while True:
     choose = int(input("ادخل الحرف الذي اخترته :"))
     if choose == 1:
        sum = sum + 4
        break
     elif choose == 2:
        sum = sum +2
        break
     elif choose == 3:
        sum = sum +5
        break
     elif choose == 4:
        sum = sum +2
        break
     else:
        print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("*************")
    print("س10:عندما تدخل الى حفلة اجتماعية ,تدخل")
    print("1)بشكل صاخب ملفت للانتباه \n2)بشكل هادى مع الالتفاف للبحث عن شخص تعرفه \n"
          "3)بشكل هادى مع محاولة عدم لفت انتباه الاخرين ")
    while True:
     choose = int(input("ادخل الحرف الذي اخترته :"))
     if choose == 1:
        sum = sum +6
        break
     elif choose == 2:
        sum = sum +4
        break
     elif choose == 3:
        sum = sum +2
        break
     else:
        print("لقد اخترت حرف خاطئ, أعد المحاولة")
    print("************************************")
    print("انتهى الاختبار ")
    print("*************")
    print("شخصيتك هي : ")
    if sum >60:
        print("أنت شخصية مستبدة أو مثيرة للاعجاب ,لكن ليست محل ثقة")
    elif sum >51 and sum <=60:
        print("قيادية بالفطرة")
    elif sum> 41 and sum<=50:
        print("حيوية ومفعمة بالنشاط ")
    elif sum> 31 and sum<=40:
        print("حساسة وحذرة وموهوبة")
    elif sum> 21 and sum<=30:
        print(" مجتهدة لكن مترعة ")

while True:
    quiz1()
    print("*******************")
    rep = input(f"{name}  هل تريد إعادة الاختبار (y/n)?")
    if rep == 'y':
        print(f"حسنا{name }ًسيتم اعادة الاختبار ")
    else:
        print(f"وداعاً {name} ")
        break

print()

