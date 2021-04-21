movies = [
    ("Eternal Sunshine of the Spotless Mind", 20000000),
    ("Memento", 9000000),
    ("Requiem for a Dream", 4500000),
    ("Pirates of the Caribbean: On Stranger Tides", 379000000),
    ("Avengers: Age of Ultron", 365000000),
    ("Avengers: Endgame", 356000000),
    ("Incredibles 2", 200000000)
]


numToAdd = int(input("How many more movies would you like to add? "))

for i in range(numToAdd):
    title = input("Enter the title of the movie to add ")
    budget = int(input("Enter the budget of the movie to add "))
    new_movie = (title, budget)
    movies.append(new_movie)


total = 0

for movie in movies:
    total = total + movie[1]

average = total / len(movies)
print(average)

count = 0
for movie in movies:
    if movie[1] > average:
        diff = movie[1] - average
        print(f"The amount {movie[0]} is above the average budget is ${diff}")
        count += 1


print(f"There were {count} movies above the average budget")

