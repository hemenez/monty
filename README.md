# The Monty Program

## Synopsis
Thank you for taking the time to check out our Monty Byte Code Interpreter project. This project was completed with the help of Holberton School. Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Files containing Monty byte codes usually have the `.m`  extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account.

## Learning Objectives
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
* How to work with git submodules

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded

## Environment
Our Monty project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## Compilation and Output

Code will be compiled in this way:

`gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

* Output will be printed on `stdout`
* Error messages will be printed on `stderr`

## Repository Contents
This repository contains the following files:

### AUTHORS

Contains the authors of the project

### addfxn.c

Adds the top two elements of the stack

### entry_func.c

The main function that signifies the entry point to get the filename

### file_handler.c

First function handles opening/reading/closing file
Second function handles freeing the linked list.

### monty.h

The header file

### nopfxn.c

Function does nothing

### pallfxn.c

Function prints all the values on the stack

### pintfxn.c

Function prints the value at the top of the stack

### popfxn.c

Function pops an element off the stack

### pushfxn.c

Function pushes an element to the stack

### subfxn.c

Function subtracts the top two elements of the stack

### swapfxn.c

Function swaps the top two elements of the stack

### tokenloop.c

Function will send tokenized piece to see if it matches opcode

## Authors
[Lindsey Hemenez](https://github.com/hemenez)
[Raman Hundal](https://github.com/hundalrs)
