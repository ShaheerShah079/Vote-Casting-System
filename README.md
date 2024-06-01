*Project Description :*
This project is a simple Vote Casting System implemented in C, designed as a semester project for the Programming Fundamentals course. The system allows users to cast votes for three different political parties, view the current vote counts, and save the vote counts to a file. The project utilizes fundamental programming concepts such as file handling, functions, loops, and conditional statements.
Provide Persistent storage Vote counts are saved to a file (program.txt) and loaded when the program starts, ensuring data persistence across sessions.
*Code Overview :*
Functions
1. void castvote(int* arr)
Prompts the user to select a candidate and updates the vote count for the chosen party.

2. void votesCount(int* arr)
Displays the current number of votes each party has received.

3. void Exit(int* arr)
Saves the current vote counts to a file and exits the program gracefully.

Main Function
Initialization: Initializes the vote count array and reads the existing vote counts from program.txt.
Menu Loop: Continuously presents a menu allowing the user to cast a vote, view vote counts, or exit the program.
