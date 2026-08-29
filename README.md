# C Foundations

A hands-on collection of low-level C mini-projects built from scratch. Focuses on string manipulation, manual memory management, pointer arithmetic, structs, node-based data structures, and Makefile build automation.

## Development Environment 

- **Language:** C
- **Compiler:** GCC
- **Compiler Flags:** `-Wall -Wextra -Werror`
- **Environment:** Antix-Linux (Debian-Based) - Vim - Valgrind

## Repository Structure

- **`week01_setup/`** — Environment setup & initial GCC sanity checks.
- **`week02_Strings/`** — String utilities (`ft_strlen`, `ft_strcmp`, `ft_strcpy`).
- **`week03_Pointers/`** — Memory allocation & address operations (`ft_swap`, `ft_strdup`, `ft_range`).
- **`week04_Structs/`** — Custom data types & memory alignment (`Userstructs.c`).
- **`week05_Lists/`** — Linked list node mechanics (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstclear`) & `print_rev.c` CLI utility.

## How To Run

1 - Clone your repository

```bash
git clone https://github.com/LambdaTeam710/C-Foundations.git
cd C-Foundations
```
2 - Navigate to any module folder you want and compile it using its Makefile :

```bash
cd week02_Strings
make
./Strings
```
3 - Clean build artifacts
```bash
make clean
```

## Optional Build Rules

To wipe all object files and the binary executable created by make:

```bash
make fclean
```
To perform a complete clean reset and rebuild from scratch:

```bash
make re
```
