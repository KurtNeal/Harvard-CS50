def get_long(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Please enter a valid number.")

def check_sum(num):
    total = 0
    buffer = 0
    var = True
    while num > 0:
        if var:
            total += num % 10
            num //= 10
            var = False
        else:
            buffer = num % 10
            buffer *= 2
            if buffer >= 10:
                total += buffer % 10
                total += buffer // 10
            else:
                total += buffer
            var = True
            num //= 10
    if total % 10 == 0:
        return True
    print("INVALID")
    return False

def main():
    digits = 0
    single_digits = 0
    double_digits = 0
    user_num = get_long("Your Credit Card Num?: ")
    checksum = check_sum(user_num)
    if not checksum:
        return
    temp_num = user_num  # We'll use temp_num to preserve user_num for the checksum
    while temp_num > 0:
        if temp_num < 10:
            single_digits = temp_num
        if 10 < temp_num < 100:
            double_digits = temp_num
        temp_num //= 10
        digits += 1

    if (double_digits in (34, 37)) and digits == 15:
        print("AMEX")
    elif (double_digits in (51, 52, 53, 54, 55)) and digits == 16:
        print("MASTERCARD")
    elif single_digits == 4 and digits in (13, 16):
        print("VISA")
    else:
        print("INVALID")

if __name__ == "__main__":
    main()
