while True:
    try:
        h = int(input("How tall?: "))
        if 1 <= h <= 8:
            break
        else:
            print("Please enter a number between 1 and 8.")
    except ValueError:
        print("Please enter a valid integer.")

for r in range(h):
    # Print leading spaces
    print(" " * (h - r - 1), end="")

    # Print left hashes
    print("#" * (r + 1), end="")

    # Print gap
    print("  ", end="")

    # Print right hashes
    print("#" * (r + 1))
