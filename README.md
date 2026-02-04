# Make Perfect Square

A C console game that generates two random non-prime integers (1–20) and challenges the player to enter the smallest num3 that makes (num1 × num2 × num3) a perfect square. The program displays prime factorization to help the player reason about the answer.   

----------------------------------------------------------------

How the Game Works   

1. The program randomly generates two non-prime integers between 1 and 20 (num1 and num2).   
2. The player enters a positive integer num3.   
3. The program checks whether num1 × num2 × num3 is a perfect square.   
4. The program tells the player if the input is correct, and shows the smallest correct num3.   
5. The player can choose to play again.   

----------------------------------------------------------------

Requirements   

- A C compiler (such as gcc)   
- Terminal / Command Prompt   
- Linux, macOS, or Windows (MinGW)   

----------------------------------------------------------------

How to Compile and Run   

Open a terminal in the project directory and run:   

gcc make_perfect_square.c -o make_perfect_square   
./make_perfect_square   

On Windows (MinGW):   

gcc make_perfect_square.c -o make_perfect_square.exe   
make_perfect_square.exe   

----------------------------------------------------------------

Project Structure   

Make-Perfect-Square/   
- make_perfect_square.c   
- README.md   
- .gitignore   

----------------------------------------------------------------

Example Output   

===Make Perfect Square===   

Two non-prime integers between 1 and 20 are:   
num1:                        12 = 2 X 2 X 3   
num2:                        20 = 2 X 2 X 5   

Enter num3: 2   
num3:                        2 = 2   
num1 X num2 X num3:          480 = 2 X 2 X 2 X 2 X 2 X 3 X 5   

Wrong! The correct num3 is   15 = 3 X 5   
num1 X num2 X num3:          3600 = 2 X 2 X 2 X 2 X 3 X 3 X 5 X 5   
15 is the smallest num3 that makes num1 X num2 X num3 a perfect square.   

Enter Y to play again or any other key to quit:   

----------------------------------------------------------------

Author   

Created by yb   
Language: C   
