# 42 C++ Modules

A collection of C++ exercises from the 42 school curriculum, covering object-oriented programming concepts progressively from cpp00 to cpp09.

---

## Modules Overview

### cpp00 — Basics
- **ex00** — `megaphone`: Command-line argument uppercasing
- **ex01** — `phonebook`: A simple phonebook with ADD/SEARCH/EXIT commands, up to 8 contacts

### cpp01 — Memory, References & Pointers
- **ex00** — Zombie allocation: stack vs heap object creation
- **ex01** — ZombieHorde: array allocation with `new[]`
- **ex02** — Brain: pointer vs reference demonstration
- **ex03** — HumanA/HumanB: reference vs pointer weapon ownership
- **ex04** — File replacement: string find-and-replace using file streams
- **ex05** — Harl: function pointers with a complaining logger
- **ex06** — HarlFilter: switch-case fall-through log filtering

### cpp02 — Operator Overloading & Fixed-Point Numbers
- **ex00** — Fixed: Orthodox Canonical Form basics
- **ex01** — Fixed: int/float constructors, `toInt()`, `toFloat()`
- **ex02** — Fixed: full operator overloading (`+`, `-`, `*`, `/`, `++`, `--`, comparisons, `min`/`max`)

### cpp03 — Inheritance
- **ex00** — ClapTrap: base class with attack/damage/repair
- **ex01** — ScavTrap: inherits ClapTrap, adds `guardGate()`
- **ex02** — FragTrap: inherits ClapTrap, adds `highFivesGuys()`

### cpp04 — Polymorphism & Abstract Classes
- **ex00** — Animal/Dog/Cat: virtual functions and polymorphism
- **ex01** — Brain: deep copy with dynamically allocated members
- **ex02** — Abstract Animal: pure virtual `makeSound()`

### cpp05 — Exceptions
- **ex00** — Bureaucrat: grade validation with custom exceptions
- **ex01** — Form: signable forms with grade requirements
- **ex02** — AForm: abstract base with ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm
- **ex03** — Intern: factory pattern to create forms by name

### cpp06 — Type Casting
- **ex00** — ScalarConverter: convert a literal string to char/int/float/double
- **ex01** — Serializer: `reinterpret_cast` to serialize/deserialize pointers
- **ex02** — Base/A/B/C: `dynamic_cast` to identify types at runtime

### cpp07 — Templates
- **ex00** — `whatever.hpp`: generic `swap`, `min`, `max`
- **ex01** — `iter.hpp`: generic array iterator with function pointer
- **ex02** — `Array.hpp`: templated array class with bounds checking

### cpp08 — STL Containers & Algorithms
- **ex00** — `easyfind`: template function to search any container
- **ex01** — Span: find shortest/longest span in a set of numbers
- **ex02** — MutantStack: iterable stack by extending `std::stack`

### cpp09 — STL in Practice
- **ex00** — BitcoinExchange: look up historical BTC prices from a CSV database
- **ex01** — RPN: Reverse Polish Notation calculator using a stack
- **ex02** — PmergeMe: Ford-Johnson (merge-insert) sort on `std::vector` and `std::deque`

---

## Build

Each exercise has its own `Makefile`. From any exercise directory:

```bash
make        # build
make clean  # remove object files
make fclean # remove object files and binary
make re     # full rebuild
```

---

## Requirements

- C++ compiler with C++98 support (`g++` or `clang++`)
- Flags used: `-Wall -Wextra -Werror -std=c++98`
