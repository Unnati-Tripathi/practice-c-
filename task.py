choice="y"
while choice in "yY":
    a=int(input("enter the first number to be proceesed                :"))
    b=int(input("enter the second number to be proceesed             :"))
    op=input(" please select one of the following operaytors from following \n 1:+ for addition \n 2:-for subtraction  \n 3:% fro remainder \n 4: ** for exponent \n 5:/ for devision\n\n:")
    print("____________________________________________________________________________________________________________")
    if op=="+":
        print("the result of your problem   is   :",a+b)
    if op=="*":
        print("the result of your problrm is   :",a*b)
    if op=="-":
        print("the result of your problrm is   :",a-b)
    if op=="%":
        print("the result of your problem is   :",a%b)
    if op=="**":
        print("the result of your problrm is   :",a**b)
    if op=="/":
        if b==0:
            print("if you take b=0 then the answer will be not defined   :")
        else:
            print("the result of your problrm is   :",a/b)
    print( "____________________________________________________________________________________________________________")
    choice=input("do you want to do more arithmaic problem solving y for yes    :")