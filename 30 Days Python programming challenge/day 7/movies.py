# Create an empty list to store the favorite movies
favorite_movies = []

# Keep asking the user to enter their favorite movies until they type 'stop'
while True:
    movie = input("Enter your favorite movie (type 'stop' to end): ")
    if movie.lower() == 'stop':
        break
    favorite_movies.append(movie)

# Print the list of favorite movies
print("Your favorite movies:")
for movie in favorite_movies:
    print(movie)
