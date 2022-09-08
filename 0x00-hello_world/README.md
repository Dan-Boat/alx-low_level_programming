## Low level programming (with C language)
This repository basically covers the introduction of C programming with the various level of converting source code into executables (preprocessing, compiling, assembling and linking)

* Ex0: gcc -E $CFILE  use the GNU gcc compiler to run the source code through preprocessor 

* Ex1: gcc -c $CFILE  compile the source code without linking 

* Ex2: gcc -S $CFILE  generate assemblage code from the source code 

* Ex3: gcc $CFILE -o cisfun  compile the source code to generate the executable file cisfun

* Ex4: Contains C code that prints a text using puts 

* Ex5: shows C code that prints a text by using printf 

* Ex6: Contain the code for a program that displays the size of the various data types in C eg. char, int, long long int

* Ex7: gcc -S -masm=intel $CFILE  shows the compilation of C code in intel syntax 

* Ex8: Code for a program that displays a text with the write funtion. I use the string.h to determine the size of the text with strlen 
