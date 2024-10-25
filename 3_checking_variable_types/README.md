# Overview
This set of code demonstrates how to declare variables of different types in the C++ language and how to identify their types with ```typeid(var).name()``` code, when ```var``` is the variable's name.

### Program manual
This program just shows the declared variables' values on the terminal screen and then shows their types afterwards with the ```cout << typeid(var).name()``` code, when ```var``` is the delcared variable names. The variable types shown on the terminal will be abbreviated as the following:
- ```int``` &rarr; ```i```
- ```float``` &rarr; ```f```
- ```double``` &rarr; ```d```
- ```char``` &rarr; ```c```
- ```bool``` &rarr; ```b```

These variables are strictly of C++ **built-in** types. The **user-defined** types will be discussed later in a different repository.

### Code structure
Because this is still a very simple program to demonstrate variable declaration and variable type identification, all the code are contained in the main function stored in the ```main.cpp``` file.

### Program flow
1. All the variable of different types get declared and assigned their values
2. All the values in 1. gets shown on the terminal
3. The abbreviated variable types get shown on the terminal


