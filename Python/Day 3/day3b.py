from os import chmod


test_data = r"C:\Users\aucnh\Documents\Code\Python\Advent_of_code_2021\data\day3_data.txt"
real_data = r"C:\Users\aucnh\Documents\Code\Python\Advent_of_code_2021\data\day3.txt"

with open(test_data, "r") as data:
    the_data = [x.strip("\n") for x in data.readlines()]






def onesOrZero(theData, indexPos, test):
    zero = 0
    One = 0
    for number in the_data:
        if number[indexPos] == "1":
            One += 1
        else:
            zero +=1

    if zero == One and test == True:
        return "1"
    elif zero == One and test == False:
        return "0"
    elif zero > One:
        return "0"
    else:
        return "1"




def removeItems(inList, numPos, want):
    numberofNumber = len(inList)
    outList = []
    for num in range((numberofNumber - 1), 0, -1):
        if the_data[num][numPos] == want:
            outList.append(inList[num])  
    return outList


listCount = len(the_data[0])
b =0
while listCount >= 1:
    c = onesOrZero(the_data, b, True)
    print(c)
    the_data = removeItems(the_data, b, c)
    listCount -= 1
    b += 1


print(the_data)