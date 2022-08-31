numAmount = input()

total = 0

for i in range(int(numAmount)) :
    num = input()
    power = num[-1]
    num = num[:-1]

    total = total + (int(num) ** int(power))

print(total)
