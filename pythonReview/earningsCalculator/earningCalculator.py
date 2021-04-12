name = input("Enter employee name: ")
wage = input("Enter employee wage: ")
hours = input("Enter number of hours worked this week: ")

name = name.strip().title()
wage = wage.strip().lstrip("$")
hours = hours.strip()

total_earnings = float(wage) * float(hours)

print(f"{name} earned ${total_earnings:.2f} this week.")

