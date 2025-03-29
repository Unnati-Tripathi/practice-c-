import random
file2 = open("password generator.txt","a")
print("WELCOME TO OUR PASSWORD GENERATOR        :)")
print("------------------------------------------------------------------------------------------------------------\n")
numlist=[]
for r in range(10):
    r=str(r)
    numlist.append(r)
line="a b c d e f g h i j k l m n o p q r s t u v w x y z"
alphalist=line.split()
x="y"
speciallist=("!","@","#","$","%","^","&","*","\\")
while x in "yY":
    x=random.randint(9,15)
    password=""
    for k in range(x):
        password=list(password)
        q=random.randint(0,9)
        w=random.randint(0,25)
        e=random.randint(0,8)
        a=numlist[q]
        b=alphalist[w]
        c=speciallist[e]
        password.append(a)
        password.append(b)
        password.append(c)
        password="".join(password)
    print("your password is    :", password)
    print( "------------------------------------------------------------------------------------------------------------\n")
    password=str(password)
    ask=input("plesase enter y for saving your password and n to close             :")
    if ask in "yY":
        print(   "------------------------------------------------------------------------------------------------------------\n")
        ask2=input("enter the designstion for your password     :")
        saving=[ask2,"                     :"]
        file2.writelines(saving)
        file2.write(password)
        file2.write("\n")
        print( "------------------------------------------------------------------------------------------------------------\n")
        print(" your password has been successfully saved in the file named password generator with the given designation in your c drive with this program   :)")
        print("NOTE   : plese do not rename the password file else your password will not be saved correctly      :)")
    else:
        print(" process finished thankyou for using our service       :)")
    x = input("please enter y to generate another random password and n to close      :")