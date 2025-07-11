# Credit Card Validator (`credit.c`)

This project is a C program that validates credit card numbers using **Luhn’s Algorithm** and identifies the card type (VISA, MasterCard, or American Express).

## 💡 About the Project

This project was developed as part of the [CS50: Introduction to Computer Science](https://cs50.harvard.edu/) course offered by **Harvard University**.

The program prompts the user to enter a credit card number and performs the following:

1. **Validates** the card number using Luhn’s checksum algorithm.
2. **Determines** the card issuer based on the number’s length and leading digits:

   * VISA
   * MasterCard
   * American Express
   * INVALID (if the number doesn't meet known criteria)

## 🛠️ Features

* Implements **Luhn’s algorithm** for credit card validation.
* Determines the **issuer** based on number pattern:

  * VISA: Starts with 4 and is 13 or 16 digits long.
  * MasterCard: Starts with 51–55 and is 16 digits long.
  * American Express: Starts with 34 or 37 and is 15 digits long.
* Built using **CS50’s library** for input handling.

## 📂 File Structure

* `credit.c` – Contains all the logic, helper functions, and validation flow.

## 🧠 Logic Overview

* **Checksum Function**: Doubles every other digit from the second-to-last, adds their digits, and sums with the untouched digits. If the total is divisible by 10, the number is valid.
* **Card Length and Prefix**: Checked to determine if the number matches known formats for major card issuers.

## ▶️ How to Run

1. Install the [CS50 library](https://cs50.readthedocs.io/libraries/cs50/c/) if needed.

2. Compile the code:

   ```bash
   clang -o credit credit.c -lcs50
   ```

3. Run the executable:

   ```bash
   ./credit
   ```

4. Enter a credit card number when prompted.

## 📚 What I Learned

* Understanding of modular arithmetic and digit manipulation.
* Practice with control flow and function decomposition.
* Application of real-world validation algorithms in programming.
* Exposure to memory-efficient programming in C.

## 🧑‍💻 Author

Kapish Bhati
*Completed as part of the CS50 Harvard University course*


