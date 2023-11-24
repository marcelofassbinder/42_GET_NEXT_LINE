# 42_GET_NEXT_LINE ↩️
Reading a line from a fd is way too tedious.

# About ✍
This project is part of the Rank 01 from 42 Common Core and focuses on creating a function designed to read a single line, delimited by a newline character, by accepting a file descriptor as a parameter. It offers a dynamic and efficient solution for processing and retrieving lines from diverse input sources, including files. When called in a loop, `get_next_line` returns all the contents of the file, one line at a time until the end of the file is reached. Also, this function works with any size of buffer size specified (as the subject asks).

# Protoype 🖥️
```c
char	*get_next_line(int fd);
```
 - `fd` -> File descriptor indicating the source to read the line from.

# Challenges and Learning Objectives 🧠
 - **Static Variable Implementation**: Through this project, we gained valuable insights into implementing static variables within functions, enhancing our understanding of efficient memory management and function behavior.
 - **File Descriptor Implementation**: We learned to effectively utilize file descriptors (fd) in our project, expanding our knowledge of handling input sources and enhancing overall program efficiency.
 - **Macro Implementation**: Understanding the use of macros in functions, such as defining values like `BUFFER_SIZE` in our header file, allowed for flexible and easily adjustable code configurations.

# Grade  <p><img height="30px" src="https://img.shields.io/badge/-125%20%2F%20100-success" /></p>

# Norminette 🪖
At 42 School, we need to follow some strict rules when writing our code. These rules are described in the Norm and checked by the formidable `norminette`. Here are some of them:
```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be maximum 25 lines
- One single variable declaration per line
- You can’t declare more than 5 variables per function
- You can't write more thane 5 functions per file
...
```
[Click here](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) to review the complete Norm document.
