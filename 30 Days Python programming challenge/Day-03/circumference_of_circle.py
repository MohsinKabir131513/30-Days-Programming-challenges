import math

# Define constant for the value of PI
PI = math.pi

# Function to calculate circumference of a circle
def calculate_circumference(radius):
    circumference = 2 * PI * radius
    return circumference

# Ask the user for the radius of the circle
radius = float(input("Enter the radius of the circle: "))

# Calculate and print the circumference
circumference = calculate_circumference(radius)
print(f"The circumference of the circle with radius {radius} is {circumference:.2f}")
