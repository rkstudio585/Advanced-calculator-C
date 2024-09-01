# Advanced-calculator-C

![Python calculate Logo](logo.svg)

---

## Overview

The Advanced Calculator is a versatile and user-friendly C-based application designed to perform a wide range of mathematical operations. It supports basic arithmetic, trigonometric functions, logarithms, factorial calculations, complex number operations, matrix arithmetic, and statistical analysis. The calculator is enhanced with detailed formula hints and formatted outputs to facilitate an intuitive user experience.

## Features

- **Basic Arithmetic Operations**: Addition, Subtraction, Multiplication, Division, and Exponentiation.
- **Trigonometric Functions**: Sine, Cosine, and Tangent calculations for angles in degrees.
- **Logarithmic Functions**: Base-10 Logarithm and Square Root.
- **Factorials**: Calculation of factorials for non-negative integers.
- **Complex Numbers**: Support for addition, subtraction, multiplication, and division of complex numbers.
- **Matrix Operations**: Matrix addition and subtraction.
- **Statistical Analysis**: Calculation of mean, median, and standard deviation.
- **User Guidance**: Detailed formula hints and help menus for easy navigation.
- **Formatted Output**: Clear and formatted results for better readability.

## Installation

To use the Advanced Calculator, you need a C compiler. Follow these steps to set up and run the calculator:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/mdriyadkhan585/Advanced-calculator-C
   cd Advanced-calculator-C
   ```

2. **Compile the Program**:
   ```bash
   gcc -o calculator Simple.c -lm
   gcc -o calculator Next-level.c -lm
   gcc -o calculator main.c -lm
   ```

   - `-o calculator` specifies the output executable name.
   - `-lm` links the math library required for mathematical functions.

3. **Run the Program**:
   ```bash
   ./calculator
   ```

## Usage

Upon launching, the calculator presents a command prompt where users can enter various operations. Here’s a brief overview of how to use each feature:

### Basic Arithmetic Operations

- **Commands**: `add`, `sub`, `mul`, `div`, `exp`
- **Input**: Enter two numbers separated by space.
- **Example**: `add 5 3` will output `8.00`.

### Trigonometric Functions

- **Commands**: `sin`, `cos`, `tan`
- **Input**: Enter an angle in degrees.
- **Example**: `sin 30` will output `0.50`.

### Logarithmic Functions

- **Commands**: `log`, `sqrt`
- **Input**: Enter a number.
- **Example**: `log 100` will output `2.00`.

### Factorials

- **Command**: `fact`
- **Input**: Enter a non-negative integer.
- **Example**: `fact 5` will output `120`.

### Complex Numbers

- **Command**: `complex`
- **Input**: Enter the real and imaginary parts of two complex numbers, and choose an operation (`+`, `-`, `*`, `/`).
- **Example**: `complex 1 2 3 4 +` will output `4.00 + 6.00i`.

### Matrix Operations

- **Command**: `matrix`
- **Input**: Enter the dimensions of the matrices, followed by the elements of each matrix, and choose an operation (`+`, `-`).
- **Example**: 
  ```
  matrix
  Enter dimensions: 2 2
  Matrix 1: 1 2 3 4
  Matrix 2: 5 6 7 8
  Operation: +
  ```

### Statistical Analysis

- **Command**: `stats`
- **Input**: Enter the number of data elements, followed by the data values.
- **Example**:
  ```
  stats
  Enter number of elements: 5
  Data: 1 2 3 4 5
  ```

## Help Menu

Type `help` to view a list of commands and their descriptions:

- `add`: Addition
- `sub`: Subtraction
- `mul`: Multiplication
- `div`: Division
- `exp`: Exponentiation
- `sin`: Sine of an angle
- `cos`: Cosine of an angle
- `tan`: Tangent of an angle
- `log`: Logarithm (base 10)
- `sqrt`: Square Root
- `fact`: Factorial of a non-negative integer
- `complex`: Operations on complex numbers
- `matrix`: Matrix addition and subtraction
- `stats`: Statistical calculations (mean, median, standard deviation)
- `help`: Show help menu
- `exit`: Exit the calculator

## Mathematical Formulas

The Advanced Calculator supports the following formulas:

1. **Addition**: \( \text{num1} + \text{num2} \)
2. **Subtraction**: \( \text{num1} - \text{num2} \)
3. **Multiplication**: \( \text{num1} \times \text{num2} \)
4. **Division**: \( \text{num1} / \text{num2} \)
5. **Exponentiation**: \( \text{num1}^{\text{num2}} \)
6. **Sine**: \( \sin(\text{angle in degrees}) \)
7. **Cosine**: \( \cos(\text{angle in degrees}) \)
8. **Tangent**: \( \tan(\text{angle in degrees}) \)
9. **Logarithm (base 10)**: \( \log_{10}(\text{num}) \)
10. **Square Root**: \( \sqrt{\text{num}} \)
11. **Factorial**: \( n! \)
12. **Complex Number Addition**: \( (a + bi) + (c + di) \)
13. **Complex Number Subtraction**: \( (a + bi) - (c + di) \)
14. **Complex Number Multiplication**: \( (a + bi) \times (c + di) \)
15. **Complex Number Division**: \( \frac{a + bi}{c + di} \)
16. **Matrix Addition**: \( [A] + [B] \)
17. **Matrix Subtraction**: \( [A] - [B] \)
18. **Mean**: \( \frac{\text{sum(data)}}{n} \)
19. **Median**: Middle value of sorted data
20. **Standard Deviation**: \( \sqrt{\frac{\text{sum}((\text{data}[i] - \text{mean})^2)}{n}} \)
    
---
