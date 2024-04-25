# Create an empty list to store the fruits
fruits = []

# Prompt the user to input 5 fruits
for i in range(5):
    fruit = input("Enter a fruit: ")
    fruits.append(fruit)

# Print each fruit using a for loop
print("Fruits you entered:")
for fruit in fruits:
    print(fruit)
