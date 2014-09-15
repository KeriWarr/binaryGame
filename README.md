# binaryGame

  This is a comnad line based C++ sketch-up of the logic for a simple competetive head-to-head startegy game which myself and a few other friends thought up.
  IIRC the game is currently configured to run a Human vs. Computer game with randomized win conditions where neither player is aware of the others win condition. Full list of current win cons is in the code :)

## How to Use:

1. run make to compile (definitely works on ubuntu)
2. execute main

## Things to do

1. Re-write AI using backtracking algortithm
2. Abstractify win conditions such that winCon objects are created in main.cc from a winCon class which has something along the lines of a hasWon() function. This necessitates the use of a backtracking algorithm because currently the AI directly pursues the particular winCon which is assigned to it based upon hard-coded logic. 
3. Write a Web-based version using AngularJS
4. Get other people to do the backend stuff
5. Implement an account system
6. Implement random opponenet/specific opponent type head-to-head matches
7. ???
8. Profit
