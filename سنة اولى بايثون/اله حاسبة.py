while True:
     try:
       num1=float(input("enter your first number: "))
       break
     except ValueError:
         print("invalid value. Enter the number")
while True:
     try:
         op=input("enter your operator: ")
         if op in ('*','+','-','/'):
          break
         else:
             raise ValueError
     except ValueError:
         print("invalid value. Enter the operator(*,/,-,+):")

while True:
     try:
       num2=float(input("enter your second number: "))
       if num2 == 0 and op == '/':
           raise ZeroDivisionError
           break
     except ValueError:
         print("invalid value. Enter the number")
     except ZeroDivisionError:
         print("can't divide by zero. enter the number:")
if op=="+":
     print(num1 ,"+",num2,"=",num1+num2)
elif op=="-":
     print(num1 ,"-",num2,"=",num1-num2)
elif op=="*":
     print(num1 ,"*",num2,"=",num1*num2)
elif op=="/":
     if num2==0:
         print("can not be 0")
     else:
         print(num1, "/", num2, "=", num1 / num2)
else:
     print("your opretor is false")