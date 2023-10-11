# Decode Characters Interview Question

The question asks to decode an encoded string by the following conditions:

- A given character is followed by an integer value, which represents its count or frequency in that portion of the decoded string.
- The decoded string must follow the sequential order of the encoded string.

For example, the input encoded string `"B1c2d4a2"` must be decoded to `"Bccddddaa"`. Likewise, the input string `"a10c3"` would be decoded to `"aaaaaaaaaaccc"`.

This repository represents my solution of this problem written in C++!

## Running

Compile the C++ file and then run the program on your terminal:

```bash
g++ -std=c++17 main.cpp -o main.o
./main.o
```

## Time and Space Efficiency

The time-space complexity of my solution is as follows (I *think*):

Time Complexity: O(n), O(n*m) worst-case scenario, where n is the length of the input string and m is the average character frequency of each pair.

(UPDATE: The Time Complexity is actually O(max(input.size(), output.size())), because there is a possibilty of the input string resulting larger than the output string (e.g. "C1d1b1" has a larger size compared to "Cdb"). If not, the output string will be larger.)

Space Comlexity: O(1); the auxiliary space used by the function is constant and independent from the size of the input string.

## Thanks for reading!
