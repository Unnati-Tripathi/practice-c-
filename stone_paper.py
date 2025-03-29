import random
choice="y"
file2 = open("rock paper and siccors score board.txt","a")
while choice in "yY":
    ask=int(input("how many matches you want to have to determine the winner           :"))
    print("___________________________________________________________________________________________________________")
    point_cpu=0
    point_player=0
    for r in range(ask):
        input_1=input("  plese select among the following  \n 1: rock \n 2: siccors\n 3: paper \n  :")
        selected=["rock","paper","siccors"]
        number=random.randint(0,2)
        computer_c=selected[number]
        print(computer_c)
        print(input_1)
        if input_1 in ["1","rock"] and computer_c=="paper":
            print("the cpu selected paper and you selected rock so you have lost this match")
            point_cpu+=1
        if input_1 in ['1', "rock"] and computer_c == "rock":
            print("you and both selected rock so this match is a draw  ")
        if input_1 in ['1', "rock"] and computer_c == "siccors":
            print("you have selected rock and the cpu selected the siccors so you have won this match   ")
            point_player+=1
        if input_1 in ['3', "paper"] and computer_c == "paper":
            print("you and both selected paper so this match is a draw  ")
        if input_1 in ['3', "paper"] and computer_c == "rock":
            print("you have selected paper and the cpu selected the rock so you have won this match   ")
            point_player+=1
        if input_1 in ['2', "siccors"] and computer_c == "paper":
            print("you have selected siccors and the cpu selected the paper so you have won this match   ")
            point_player+=1
        if input_1 in ['3',"paper"] and computer_c=="siccors":
            print("the cpu selected siccors and you selected paper so you have lost this match")
            point_cpu+=1
        if input_1 in ['2',"siccors"] and computer_c=="rock":
            print("the cpu selected rock and you selected siccors so you have lost this match")
            point_cpu+=1
        if input_1 in ['2', "siccors"] and computer_c == "siccors":
            print("you and both selected siccors so this match is a draw  ")
        print("round no  ",r+1,"  have finished now next round     ")
        print("___________________________________________________________________________________________________________")
    print("results as shown         \n cpu scored ",point_cpu,"  and the player scored ",point_player,"  good luch the next time     :)")
    choice=input("do you want to play another matchup enter y for yes and any other string for no  :")
    print(" your scores have been saved in a local file named rock paper and scissors score board    ")
    print("___________________________________________________________________________________________________________")
    file2.write("cpu score  :")
    point_cpu=str(point_cpu)
    file2.write(point_cpu)
    file2.write(" player score  :")
    point_player=str(point_player)
    file2.write(point_player)
    file2.write("\n")
    file2.close()