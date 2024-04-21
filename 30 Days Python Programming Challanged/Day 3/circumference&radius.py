import math

# Define constant for PI
PI = math.pi

def calculate_circumference(radius):
    # Calculate circumference
    circumference = 2 * PI * radius
    return circumference

def main():
    # Input radius from the user
    radius = float(input("Enter the radius of the circle: "))

    # Calculate circumference
    circumference = calculate_circumference(radius)

    # Display the result
    print("The circumference of the circle with radius", radius, "is:", circumference)

if __name__ == "__main__":
    main()
