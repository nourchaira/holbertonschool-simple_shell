![Copy of Blank board](https://github.com/nourchaira/holbertonschool-simple_shell/assets/146720384/abbdf179-040d-4c3d-90e2-641521e47a26)

# Simple Shell 

## Description 📖

The simple shell is a basic command line prompt designed to execute fundamental commands similar to the bash shell. This project was developed as part of the curriculum at Holberton School.

Shell scripts allow for the automation of commands, offering features like command substitution and program-like scripting within the operating system's interface. This shell aims to replicate some of the functionalities found in popular shells like bash.
## Compilation

Compile the shell using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell 
```
## Usage
To launch the shell after compiling:

```bash
./shell 
```
Output: A prompt in the terminal $
## Output
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
Example of error with sh:
```bash
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program hsh:

``` bash
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Tasks
**README**
Write a README for your project.

**man**
Write a manual for your shell.

**AUTHORS**
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker.

**Betty would be proud**
Write beautiful code that passes the Betty checks.

**Simple shell 0.1**
Write a UNIX command line interpreter.

**Simple shell 0.2**
- Simple shell 0.1 +
- Handle command lines with arguments.

**Simple shell 0.3**
- Simple shell 0.2 +
- Handle the PATH
- `fork` must not be called if the command doesn’t exist

**Simple shell 0.4**
- Simple shell 0.3 +
- Implement the exit built-in, that exits the shell
  - Usage: `exit`
  - You don’t have to handle any argument to the built-in exit

**Simple shell 1.0**
- Simple shell 0.4 +
- Implement the env built-in, that prints the current environment.
## Authors
[Mohamed aziz layouni](https://github.com/laayounii)
[Nour chaira](https://github.com/nourchaira)
