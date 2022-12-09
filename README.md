# Simple Shell

This project is the most important of the first trimester of Holberton School, is the consolidation of everything we learned in the quarter about System engineering & DevOps and Low-level programming & Algorithm. Using C programming language, we develop our own Shell.

### Description

The shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

## Requirements

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   Your shell should not have any memory leaks
-   No more than 5 functions per file
-   All your header files should be include guarded
-   Use system calls only when you need to ([why?](https://intranet.hbtn.io/rltoken/rp53OodD6JzhS5Cv4DHkxQ "why?"))

### GitHub

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## More Info

### Output

-   Unless specified otherwise, your program  **must have the exact same output**  as  `sh`  (`/bin/sh`) as well as the exact same error output.
-   The only difference is when you print an error, the name of the program must be equivalent to your  `argv[0]`

|Function|Description  |
|--|--|
|shell_star.c|
|main | Function that runs the shell|
|prompt | Function that prints the prompt|
|_EOF (End Of Life)| Checks if the buffer is EOF|
|shell_exit | Function that exits the Shell|
| create_child.c | Creates a subprocess |
|create_chile.c | Function which creates a subprocess|
|change_dir|Function that changes the working directory|
| execute.c| Executes the commands|
|execute| Executes a command|
|print_env| It prints all the environmental variables|
|_getPATH| A function that gets the full value from environment variable PATH|
|msgerror| Prints the message not found|
|tokening.c||
|tokening| A function that splits and creates a full string command|
|free_mem.c||
|free_dp| a function that frees all the allocated memory|
|command|
|free_exit| a function that frees all the memory allocated and exits|
|auxiliar_funtions.c||
|_strcmp| it compares two strings|
|_strlen| a function that finds the length of the string|
|_strcpy| a function that copies the string to another string|
|strcat| a function that concatenates two strings|
|_atoi|a function that converts a string to an integer|
|--|--|

