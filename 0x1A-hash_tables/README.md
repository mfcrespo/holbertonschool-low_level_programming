# **0x1A. C - Hash tables**

## **Learning Objectives**
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### **General**
+ What is a hash function
+ What makes a good hash function
+ What is a hash table, how do they work and how to use them
+ What is a collision and what are the main ways of dealing with collisions in the context of a hash table
+ What are the advantages and drawbacks of using hash tables
+ What are the most common use cases of hash tables

## **Requirements**

### **General**
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 14.04 LTS
+ Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are allowed to use the C standard library
+ The prototypes of all your functions should be included in your header file called hash_tables.h
+ Don’t forget to push your header file
+ All your header files should be include guarded

# **Tasks**

0. >>> ht = {}: Write a function that creates a hash table.

1. djb2: Write a hash function implementing the djb2 algorithm.

2. key -> index: Write a function that gives you the index of a key.

3. >>> ht['betty'] = 'holberton': Write a function that adds an element to the hash table.

4. >>> ht['betty']: Write a function that retrieves a value associated with a key.

5. >>> print(ht): Write a function that prints a hash table.

6. >>> del ht: Write a function that deletes a hash table.

7. $ht['Betty'] = 'Holberton': In PHP, hash tables are ordered. Wait… WAT? How is this even possible?
