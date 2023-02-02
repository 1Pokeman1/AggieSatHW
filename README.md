Howdy!

These files are a collection of everything I feel is necessary to get started in C++.

My recommended reading order is:
1. variables
2. control
3. arrays
4. operators
5. io
6. functions
7. memory
8. structsandclasses

This is a lot, yes.
I'm basically throwing all of CSCE 121 at you and expecting you to work on the first homework from CSCE 221.
If the 'homework' seems too hard, try doing your old ENGR 102 assignments. If you don't still have them, I can get them pretty easily.

If something doesn't make sense, seems very vague, or you have some other problem please let me know ASAP so I can work to improve these files.
I am available all break if you want to talk or need any help at all. I am an ENGR 102 PT, it takes a lot to annoy me so please ask questions.
Feel free to work together, AggieSat is a team project and no one should have to go it alone.

# IDE

I, personally, use [VSCode](https://code.visualstudio.com/) (not Visual Studio) for developing in C++.

It has useful extensions for interacting with WSL (see below) and code completion/syntax highlighting.

Some extensions you will find helpful:
- Intellicode
- C/C++ Extension Pack
- WSL

Once you've installed the WSL extension and activated WSL,
press the green button in the bottom left of VSCode and select `New WSL Window` to open VSCode in WSL mode.

# WSL

If you're using Windows, activate WSL.

https://learn.microsoft.com/en-us/windows/wsl/install

If you're on a Mac, you can just use the terminal.


# Linux Shell

You (probably) don't have a gui to work with in Linux.

We operate primarily in the terminal at AggieSat when working with our hardware and the satellite won't use a gui to operate itself.

Some useful commands are:
- cd [directory name] : **c**hange **d**irectory to [directory name]
- - cd .. : goes up one directory in the tree
- - cd ~ : goes to the home directory
- - cd . : goes to the current directory
- - cd - : goes to the previous directory
- ls : **l**i**s**t the files in the current directory
- pwd : **p**rint the **w**orking (current) **d**irectory
- mkdir [directory name] : **m**a**k**es a **dir**ectory called [directory name]
- rm [file name] : **r**e**m**oves a file called [file name]
- sudo [command] : (**su**per user **do**) runs the command at the highest level


# Git

Once you have access to a linux shell, install git by running `sudo apt install git` in the terminal.

Download this git repository by running `git clone https://github.com/1Pokeman1/AggieSatHW.git` in the directory you want it.

# Compilation

## Using g++

For the purposes of these notes, we will use g++.

To install g++ run `sudo apt install g++` in the terminal.

To compile with g++ run `g++ [file name.cpp]` in the terminal.
This will result in the creation of a file called `a.out` which can be run by typing `./a.out` in the terminal.

### Useful arguments

I recommend running g++ with the `-std=c++17` argument, this will make it less mad at you.

If you want the compiled program to be called something else, use the `-o [file name]` argument.

The following arguments may be added to increase the number of warnings the compiler will check for.
- `-Wall` : adds a bunch of warnings. is actually a compilation of like 20+ other flags.
- `-Wextra` : everything `-Wall` doesn't do.
- `-pedantic` : will yell at you for code style.
- `-Werror` : turns warnings into errors which prevent compilation

Ideally your g++ command should look something like `g++ -Wall -Wextra -pedantic -std=c++17 [input file name(s)] -o [output file name]`,
but `g++ -std=c++17 [input file name(s)] -o [output file name]` is fine.

## Running a compiled program

In the terminal, run `./[output file name]`

## Valgrind

Valgrind is a program that watches the memory usage of a program as it runs and reports if it finds any leaks.

Install valgrind by running `sudo apt install valgrind` in the terminal.

Say we have a program called `a.out`, we can run valgrind on it by running `valgrind ./a.out` in the terminal.

## Make

Install make by running `sudo apt install make` in the terminal.

I've included a makefile with "homework" 1. This will allow you to compile by just running `make` in the terminal.

You are welcome to lookup how makefiles work. I'm not going to cover them until we get to more complex stuff.
