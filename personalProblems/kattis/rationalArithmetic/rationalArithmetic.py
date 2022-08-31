from fractions import Fraction

testCases = input()

for i in range(int(testCases)) :

    data = input()
    
    parts = data.split(' ')

    inputSet = []
    i = 0
    for element in parts :
        if i == 2 :
            operator = element
        else :
            inputSet.append(int(element))
        i += 1

    if operator == "+" :
        value = Fraction(inputSet[0], inputSet[1]) + Fraction(inputSet[2], inputSet[3])
    elif operator == "-" :
         value = Fraction(inputSet[0], inputSet[1]) - Fraction(inputSet[2], inputSet[3])
    elif operator == "*" :
         value = Fraction(inputSet[0], inputSet[1]) * Fraction(inputSet[2], inputSet[3])
    elif operator == "/" :
         value = Fraction(inputSet[0], inputSet[1]) / Fraction(inputSet[2], inputSet[3])

    print(str(value.numerator) +  " / " +  str(value.denominator))
