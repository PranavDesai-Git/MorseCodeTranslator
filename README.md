
# Text-to-Morse Code Converter

This project is a simple C program that converts English text into Morse code.  
It supports all lowercase and uppercase alphabetic characters (A–Z) and spaces.  
Unsupported characters are ignored.

## Features
- Converts alphabetic characters (A–Z) to Morse code.
- Converts spaces into `/` in Morse code.
- Ignores characters outside the supported range.
- Uses `tolower()` to handle uppercase input safely.
- Prints Morse code output to standard output.

## How It Works
1. The program reads user input using `fgets()`.
2. It strips the trailing newline character if present.
3. Each character is converted to lowercase.
4. The program maps the character to its corresponding Morse code using fixed arrays.
5. The mapped Morse code is printed with spaces separating each Morse symbol.

## Example
**Input:**
```hello world```
**Output:**
```.... . .-.. .-.. --- / .-- --- .-. .-.. -..```