# Push Swap

Push Swap is a sorting algorithm implementation project and part of the Codam/school 42 core curriculum. The project tasks the students with writing a program in C that takes an unsorted list of integers as input and sorts them in ascending order using only two "stacks" and a limited set of operations. The aim of the project is to test the student's understanding of various sorting algorithms, their corresponding complexities and data structures, and the student's ability to implement this in code.

In this repository, you'll find my implementation of the push swap project, as well as detailed information on how to use the program and some of its pros and cons. I've also included my thought process and some tips for how to approach the project. Whether you're a 42 student looking to learn more about algorithm design and optimization, or just someone curious about the push swap algorithm, I hope this repository will be a helpful resource for you.

## Installation and Usage

To install Push Swap [download](https://github.com/abouabba/PUSH_SWAP) the program and use the command 'cd' to move to the push_swap folder.

Run 'make' to compile all the files and run the executable 'push_swap' followed by a random number of integers

```
./push_swap 24 -1 5673 -298 69 420
```
## Instructions

To sort the input arguments, the Push Swap program uses two stacks (Stack A and B) and a set of allowed operations. It starts with all the numbers in stack A, and an empty stack B. The allowed operations include:

- `sa`: swap a - swap the first two elements of stack A
- `sb`: swap b - swap the first two elements of stack B
- `ss`: swap both - swap the first two elements of both stacks A and B
- `pa`: push a - take the first element from stack B and put it on top of stack A
- `pb`: push b - take the first element from stack A and put it on top of stack B
- `ra`: rotate a - shift all elements of stack A up by one. The first element becomes the last one
- `rb`: rotate b - shift all elements of stack B up by one. The first element becomes the last one
- `rr`: rotate both - rotate both stacks A and B at the same time
- `rra`: reverse rotate a - shift all elements of stack A down by one. The last element becomes the first one
- `rrb`: reverse rotate b - shift all elements of stack B down by one. The last element becomes the first one
- `rrr`: reverse rotate both - reverse rotate both stacks A and B at the same time

The goal is to sort the integers in Stack A in ascending order, using only the allowed moves listed above in the least amount of moves. The program will write each executed move to the `STDOUT` followed by a `'\n`. After running push swap, Stack A should be sorted and Stack B empty.

An example:

`./push_swap 54 0 -46 13`\
`ra`\
`pb`\
`pb`\
`ra`\
`ra`\
`pa`\
`pa`\
`sa`

## Approach

- Parsing, put all numbers in stack A if no errors are detected. Each individual number/value was stored in a node of a linked list. One list to represent stack A and an empty list to represent stack B.
- Assign an index to each node and respective value.
- Write the different instructions. This consisted of writing functions that would move pointer to the nodes in my linked list according with the change that needed to take place. For example, `SA` makes the head pointer point to `head->next`, what `head-next` was pointing at will now point to the previous `head` and the pointer to the `head` pointer changes to point at `head->next`.
- Check if the numbers in Stack A are all sorted. If so, end the program without printing anything otherwise sort and print the executed moves to the `STDOUT`.
The sortin is done through the moves or operations mentioned above and realized by pointer manipulation of our linked list.

When approaching the Push Swap project, one of the biggest challenges was deciding which sorting algorithm to use. The amount of algorithms to choose from, each with its own strengths and weaknesses, are plenty. However, at the time, I had limited knowledge of the efficiency of these algorithms, so it was challenging to make an informed decision.

After some research and experimentation, I ultimately chose to implement radix sorting. Radix sort is a non-comparative sorting algorithm that sorts data by grouping elements into "buckets" based on their digits or bits. In our case the two buckets are our two stacks. I was drawn to radix sorting because of its efficiency with large numbers of input and the use of bitwise operations. Up until this point I was aware of bitwise operations, but never had the opportunity to apply them. This seemed like a great occasion.
