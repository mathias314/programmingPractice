cardNum = list(input("Enter credit card number: ").strip())


checkDigit = int(cardNum.pop())

cardNum = reversed(cardNum)
processedNum = []


for index, num in enumerate(cardNum):
    if index % 2 == 0:
        newNum = int(num) * 2
        if newNum > 9:
            newNum = newNum - 9
        processedNum.append(newNum)
    else:
        processedNum.append(int(num))
    
    
checksum = checkDigit + sum(processedNum)


if checksum % 10 == 0:
    print("This is a valid card number!")
else:
    print("This is an invalid card number :(")

