# 1337 CPP Piscine Systems Deep Dive

This repository contains a complete progression of early C++ Piscine modules (Module 00 to Module 04), organized by module and exercise.

The project focuses on:
- C++98 fundamentals and strict compilation flags
- Object-oriented programming (encapsulation, inheritance, polymorphism)
- Canonical class form and resource management
- Operator overloading and fixed-point arithmetic
- Interfaces, abstract classes, and dynamic behavior

## Repository Layout

The repository follows this structure:

- cpp_module_00
- cpp_module_01
- cpp_module_02
- cpp_module_03
- cpp_module_04

Each module has multiple exercises (ex00, ex01, ...), each with its own Makefile and standalone executable target.

## Build Requirements

- C++ compiler with C++98 support (g++/c++)
- make
- Linux/macOS shell (or equivalent)

Most exercises compile with:
- -Wall
- -Wextra
- -Werror
- -std=c++98

## How To Build And Run

1. Move into an exercise directory.
2. Build with make.
3. Run the produced executable (name is defined in that exercise Makefile).

Example:

~~~sh
cd cpp_module_01/ex00
make
./zombie
~~~

Useful make targets across exercises:
- make
- make clean
- make fclean
- make re

## Module Overview

## Module 00

### ex00 - Megaphone
- Source: megaphone.cpp
- Executable: megaphone
- Behavior: prints all input arguments in uppercase, or a default loud message when no argument is provided.

### ex01 - PhoneBook
- Main classes: PhoneBook, Contact
- Executable: PhoneBook
- Behavior:
- Interactive prompt with ADD, SEARCH, EXIT
- Stores contacts in a fixed-size phonebook
- Supports contact listing/search and basic input validation

### ex02 - Account
- Main class: Account
- Executable: job
- Driver: tests.cpp
- Behavior:
- Simulates bank account creation, deposits, and withdrawals
- Tracks global stats (number of accounts, total amount, total deposits/withdrawals)
- Displays account and system status reports

## Module 01

### ex00 - Zombie
- Executable: zombie
- Files: Zombie class + newZombie + randomChump
- Behavior: compares stack-allocated and heap-allocated objects and demonstrates object lifecycle.

### ex01 - Zombie Horde
- Executable: hord
- Behavior: allocates and initializes an array of Zombie objects, announces each one, and frees with delete[].

### ex02 - Brain
- Executable: brain
- Behavior: demonstrates differences between a string variable, a pointer to it, and a reference to it (addresses and values).

### ex03 - Violence
- Executable: violence
- Classes: Weapon, HumanA, HumanB
- Behavior: demonstrates composition/reference vs pointer-based association and shared mutable state through Weapon::setType.

### ex04 - String Replace
- Executable: losers
- Behavior:
- Takes file name, s1, and s2 as arguments
- Replaces all occurrences of s1 with s2
- Writes output to a .replace file

### ex05 - Harl 2.0
- Executable: harl
- Behavior: maps log levels (DEBUG, INFO, WARNING, ERROR) to member-function based messages.

### ex06 - Harl Filter
- Executable: harl
- Behavior: accepts one level and prints that level and all more severe levels using switch fallthrough.

## Module 02

### ex00 - Orthodox Canonical Form
- Executable: ocf_class
- Class: Fixed
- Behavior: introduces canonical class form with raw fixed-point storage and basic getter/setter flow.

### ex01 - Fixed Point Basics
- Executable: fixed_point
- Behavior: adds int/float constructors, conversions, and stream insertion support.

### ex02 - Fixed Point Operators
- Executable: fixed_point
- Behavior: extends Fixed with:
- Comparison operators
- Arithmetic operators
- Pre/post increment
- min/max utility functions

### ex03 - BSP (Point In Triangle)
- Executable: BSP
- Classes/Functions: Point, Fixed, bsp
- Behavior: checks whether a point is strictly inside a triangle.

## Module 03

### ex00 - ClapTrap
- Executable: claptrap
- Behavior: base combat robot class with attack, damage, repair, and energy/HP management.

### ex01 - ScavTrap
- Executable: scavtrap
- Behavior: derives from ClapTrap, custom attack behavior, and guardGate mode.

### ex02 - FragTrap
- Executable: fragtrap
- Behavior: extends hierarchy with highFivesGuys and tuned stats/capabilities.

### ex03 - DiamondTrap
- Executable: Diamond
- Behavior: combines ScavTrap and FragTrap features and exposes identity through whoAmI.

## Module 04

### ex00 - Polymorphism
- Executable: animal
- Classes: Animal/Dog/Cat and WrongAnimal variants
- Behavior: contrasts correct virtual polymorphism with incorrect non-virtual method usage.

### ex01 - Brain And Deep Copy
- Executable: Brain
- Adds: Brain class into Cat/Dog composition
- Behavior: validates deep copy semantics and destructor correctness with dynamic memory.

### ex02 - Abstract Animal
- Executable: Brain
- Behavior: turns the base animal into an abstract interface (AAnimal) and continues deep-copy and polymorphic tests.

### ex03 - Interfaces And Materia System
- Executable: Interface_recap
- Interfaces/Classes: AMateria, Ice, Cure, ICharacter, Character, IMateriaSource, MateriaSource
- Behavior:
- Learns materia types in a source
- Creates materia by type
- Equips/uses them through character interfaces

## Quick Run Matrix

Use these from the repository root:

~~~sh
cd cpp_module_00/ex00 && make && ./megaphone "hello" "world"
cd cpp_module_00/ex01 && make && ./PhoneBook
cd cpp_module_00/ex02 && make && ./job

cd cpp_module_01/ex00 && make && ./zombie
cd cpp_module_01/ex01 && make && ./hord
cd cpp_module_01/ex02 && make && ./brain
cd cpp_module_01/ex03 && make && ./violence
cd cpp_module_01/ex04 && make && ./losers input.txt old new
cd cpp_module_01/ex05 && make && ./harl
cd cpp_module_01/ex06 && make && ./harl WARNING

cd cpp_module_02/ex00 && make && ./ocf_class
cd cpp_module_02/ex01 && make && ./fixed_point
cd cpp_module_02/ex02 && make && ./fixed_point
cd cpp_module_02/ex03 && make && ./BSP

cd cpp_module_03/ex00 && make && ./claptrap
cd cpp_module_03/ex01 && make && ./scavtrap
cd cpp_module_03/ex02 && make && ./fragtrap
cd cpp_module_03/ex03 && make && ./Diamond

cd cpp_module_04/ex00 && make && ./animal
cd cpp_module_04/ex01 && make && ./Brain
cd cpp_module_04/ex02 && make && ./Brain
cd cpp_module_04/ex03 && make && ./Interface_recap
~~~

## Binary Research: VTable And VBase Manipulation

During my systems research at 1337, I conducted deep-dive experiments into the memory layout of C++ objects, specifically focusing on how the compiler handles dynamic dispatch and multiple inheritance.

### VTable Hijacking

I developed a proof of concept where I manually calculated the vptr offset and used pointer arithmetic to overwrite the virtual method table at runtime. This allowed me to redirect execution flow and bypass access modifiers, demonstrating core logic relevant to devirtualization workflows in reverse engineering.

### The Diamond Problem And VBase Pointers

I successfully mapped and manipulated the vbase (virtual base) pointer within complex inheritance structures. By understanding how the compiler uses offsets to locate virtual base classes in memory, I was able to manually resolve the diamond problem at the byte level.

## Notes

- This repo is structured for learning progression, so each exercise is intentionally self-contained.
- Some exercise names and binary names follow local naming choices in Makefiles.
- Module 04 tests include demonstrations of polymorphic behavior and memory management scenarios.

## Suggested Workflow For Study

1. Build and run each exercise in order.
2. Read main.cpp first to understand expected behavior.
3. Inspect class headers for interfaces and inheritance structure.
4. Compare implementation differences between consecutive exercises to see incremental design evolution.