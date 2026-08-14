def generate_number_pattern(rows: int) -> None:
    """Prints a simple right-angled triangle number pattern."""
    for i in range(1, rows + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

if __name__ == "__main__":
    # Example: generate a 5-row pattern
    generate_number_pattern(5)
