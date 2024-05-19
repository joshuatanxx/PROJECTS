# CPTR 142: Project III

## Description

This program runs the game Wordle, a word game popularized in late 2021.

The object of the game is to find a five-letter word chosen by the computer (or by another player if 2-player).
The player guesses by typing a five-letter word into the console. The program responds by returning the guess, with each letter having one of three conditions.

- Green: the letter is in the right place as in the answer
- Yellow: the letter is in the word, but is in a different place in the answer
- Normal (same color): the letter is not in the word

For a full description of the rules, go to this [link](https://en.m.wikipedia.org/wiki/Wordle#:~:text=Wordle%20is%20a%20web%2Dbased,or%20occupy%20the%20correct%20position.).


## Differences

There are a couple differences in this version of Wordle.

- Firstly, this version of Wordle will output a yellow letter if at least one makes an occurence in the answer. For example, if the answer was **BEGAN**, and the user inputed **SHEET**, the program would return yellow letters for both E's. This indicates that there is at least 1 E in the word, and that it/they are not in those two spots. This is different from original Wordle, where only the first E woud be yellow.

- You may notice a smaller choice of words for this game. In order to keep sizes of files down, we are using a more concise wordlist to store the answer and guess options. Don't worry if a guess is denied; that just means it isn't the answer!

## Known Bugs

N/A

## Terminal Commands

Build and run the program.

```sh
make
```

Clean out build files.

```sh
make clean
<<<<<<< HEAD
```
=======
```

Build and run test program.

```sh
make DRIVER=src/test_driver.cpp
```

Clean out test build files.

```sh
make DRIVER=src/test_driver.cpp clean
```
>>>>>>> upstream/master
