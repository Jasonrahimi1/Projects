#Rock, paper, scissors
#Jason Rahimi
choice = "y"
print("Welcome to Rock, paper, scissors.\n")
while choice == 'y':
    print("Enter player 1's hand shape as \"r\", \"p\", or \"s\": ")
    player1 = input()
    while player1 != 'r' and player1 != 'p' and player1 != 's':
      print("Please enter \"r\", \"p\", or \"s\"")
      player1 = input()
    print("Enter player 2's hand shape as \"r\", \"p\", or \"s\": ")
    player2 = input()
    while player2 != 'r' and player2 != 'p' and player2 != 's':
      print("Please enter \"r\", \"p\", or \"s\"")
      player2 = input()

    if (player1 == 'r' and player2 == 's' or player1 == 'p' and
        player2 == 'r' or player1 == 's' and player2 == 'p'): 
     print("Player 1 wins!\n")
     print("Would you like to play again?(Enter \"y\" or \"n\") ")
     choice = input()
     while choice != 'y' and choice != 'n':
        print("Please enter either \"y\" or \"n\"")
        choice = input()
     if choice == 'n':
        print("Goodbye!")

    elif (player2 == 'r' and player1 == 's' or player2 == 'p' and
         player1 == 'r' or player2 == 's' and player1 == 'p'):
        print("Player 2 wins!\n")
        print("Would you like to play again?(Enter \"y\" or \"n\") ")
        choice = input()
        while choice != 'y' and choice != 'n':
          print("Please enter either \"y\" or \"n\"")
          choice = input()
        if choice == 'n':
            print("Goodbye!")

    else:
        print("Tie!")
        print("Would you like to play again?(Enter \"y\" or \"n\") ")
        choice = input()
        while choice != 'y' and choice != 'n':
          print("Please enter either \"y\" or \"n\"")
          choice = input()
        if choice == 'n':
            print("Goodbye!")
   
