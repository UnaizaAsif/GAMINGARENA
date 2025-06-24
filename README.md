GAMING ARENA 🎮

📌 DESCRIPTION

GAMING ARENA is a mini-console-based game hub built in C. It contains 4 fun games that can be launched from a single interface:

1. QUIZ GAME – A general knowledge multiple-choice quiz.
2. TICTACTOE – Classic 3x3 game against the computer.
3. ROCK PAPER SCISSORS – Play against a randomly generating computer opponent.
4. GUESSING THE NUMBER GAME – Try to guess the secret number within 8 attempts.

🛠️ PROJECT STRUCTURE

GAMINGARENA/
│
├── main.c                    # Main launcher menu
├── Quiz.c                   # General knowledge quiz game
├── TICTACTOE.c              # Tic Tac Toe game vs computer
├── ROCKPAPERSCISSORS.c      # Rock Paper Scissors game
├── guessinggame.c           # Number guessing game
├── *.exe                    # Compiled game executables
└── README.txt               # Project overview and instructions

🚀 HOW TO RUN

1. Compile all `.c` files using a C compiler (e.g., GCC):
   gcc main.c -o main.exe  
   gcc Quiz.c -o Quiz.exe  
   gcc TICTACTOE.c -o TICTACTOE.exe  
   gcc ROCKPAPERSCISSORS.c -o ROCKPAPERSCISSORS.exe  
   gcc guessinggame.c -o guessinggame.exe

2. Run the main launcher:
   ./main.exe

3. Choose any game from the menu and enjoy!

💡 NOTES
- The project runs in terminal/command prompt.
- All games are built with standard C libraries.
- You can run the `.exe` files separately if you wish to play individual games.
- Make sure all `.exe` files are in the same directory as `main.exe`.


