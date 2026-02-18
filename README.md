🔐 C Password Generator

A simple C program that generates a strong random password based on a user-defined length.

📌 Description

This program:

Prompts the user to enter a password length (minimum 4)

Ensures the password contains:

At least one uppercase letter

At least one lowercase letter

At least one digit

At least one special character

Fills the remaining characters randomly

Prints the generated password to the console

The program uses:

stdio.h

stdlib.h

time.h

🚀 Features

✅ User-defined password length
✅ Includes uppercase letters (A–Z)
✅ Includes lowercase letters (a–z)
✅ Includes digits (0–9)
✅ Includes special characters (!@#$%)
✅ Uses rand() with time-based seed

💻 Compilation & Execution
🔹 Linux / macOS
gcc password_generator.c -o password_generator
./password_generator

🔹 Windows (MinGW)
gcc password_generator.c -o password_generator.exe
password_generator.exe

🧪 Example Run
Enter password length (min 4): 10
Generated Password: A5$kT9@bQ!

🧠 Concepts Used

Random number generation (rand, srand)

Time-based seeding (time(NULL))

Arrays and character sets

Basic input validation

String termination ('\0')

⚠️ Important Notes

This program uses rand() which is not cryptographically secure.

Suitable for learning purposes or basic password generation.

Not recommended for production-level security applications.

📈 Possible Improvements

Shuffle guaranteed characters for better randomness

Use stronger randomness source (/dev/urandom or platform APIs)

Add option to exclude certain character types

Save generated passwords to a file

Add strength meter

📜 License

Free to use for educational purposes.
