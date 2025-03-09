# Welcome to 42 Wolfsburg push_swap project

The project is an introduction to algorithmic thinking and aims at introducing students to the algorithm complexity. It's about sorting a stack of numbers with constraints. Those constraints refer to the kind of operations permitted. We were also allowed to use a helper stack to temporarily store numbers. To achieve the maximum number of points the stack of 500 numbers has to be sorted in less than 5500 operations.

### Usage
```bash
git clone https://github.com/imicovic/42-push_swap.git
make
./push_swap n1 n2 n3...n
```
The program can take multiple arguments or a single variable containing all the arguments
```bash
ARG="1 19 10 -18 298 1928 7 19"
./push_swap $ARG
```
The repository also includes the "checker" programs provided by the school in order to test whether the program works properly. To test the program against them run
```bash
ARG="1 19 10 -18 298 1928 7 19"
./push_swap $ARG | checker_OS $ARG
```
After being ran the program will print the operations takes to sort the stack. Operations are described in detail in the [subject](en.subject.pdf) page.
