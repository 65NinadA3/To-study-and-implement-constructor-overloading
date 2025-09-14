# To study and Implement Constructor Overloading

**Name**: Ninad Phatak  
**PRN**: 24070123065  
**Batch**: ENTC A3  

## Overview  

In C++, **overloading** is a feature of polymorphism where the same function or operator can perform different tasks depending on the type or number of parameters.  

- **Constructor Overloading**: A class can have multiple constructors with different parameter lists, allowing objects to be initialized in different ways.  
- **Function Overloading**: Multiple functions with the same name but different parameter lists.  
- **Operator Overloading**: Redefining operators (like `+`, `-`, `*`, `/`) to work with user-defined data types such as classes.  

This experiment demonstrates **constructor overloading, function overloading, and operator overloading** with examples.  

## 1. Addition using Constructor Overloading  

- Demonstrates constructor overloading with different parameter lists.  
- One constructor adds two integers, another adds two floats, and the third adds three integers.  
- Shows how constructors can be designed to handle different input types and counts.  

**Output:**  
Enter two integers: 2
3
Enter two floats: 4.1
5.44
Enter three integers: 3
2
9

Results:
Integer Sum (2 numbers) = 5
Float Sum = 9.54
Integer Sum (3 numbers) = 14

## 2. Rectangle Area using Constructor Overloading  

- Demonstrates constructor overloading with `int`, `float`, and `double`.  
- First constructor calculates **area** of a rectangle.  
- Second constructor calculates **perimeter** of a rectangle.  
- Third constructor checks whether the given sides form a **Square** or **Rectangle**.  

**Output:**  
Area: 50
Perimeter: 32
This is a Square

## 3. Function Overloading  

- Demonstrates function overloading using the `add()` function.  
- The function works for both **integers** and **floating-point numbers** based on parameter types.  
- Same function name, different parameter lists.  

**Output:**  
Integer Sum: 15
Float Sum: 8

## 4. Operator Overloading Calculator  

- Demonstrates operator overloading for `+`, `-`, `*`, and `/`.  
- A class `Calc` is defined, and operators are redefined to perform operations on objects.  
- Each operation returns a new object with the calculated result.  

**Output:**  
Sum: 24
Difference: 16
Product: 80
Quotient: 5

## 5. Operator Overloading for Complex Numbers  

- Demonstrates operator overloading for subtraction `-`.  
- A class `Complex` is defined to represent complex numbers.  
- The `-` operator is redefined to subtract two complex numbers.  

**Output:**  
15 +i8
