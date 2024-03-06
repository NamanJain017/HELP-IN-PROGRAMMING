n = int(input("Enter the value of n: "))
num = 2 ** n
digit_sum = sum(int(digit) for digit in str(num))
print(f"The sum of the digits of 2^{n} is: {digit_sum}")
