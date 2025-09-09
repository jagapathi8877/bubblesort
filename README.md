# Bubble Sort Implementation in C

A clean and efficient implementation of the bubble sort algorithm written in C programming language.

## Description

This project provides a simple yet well-documented implementation of the bubble sort algorithm. Bubble sort is a basic sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Features

- Clean, readable C code with comprehensive comments
- Demonstrates basic sorting algorithm implementation
- Includes sample array for testing
- Shows before and after sorting results
- Educational resource for learning sorting algorithms

## Algorithm Complexity

- **Time Complexity**: O(n²) in worst and average case, O(n) in best case
- **Space Complexity**: O(1) - sorts in place
- **Stable**: Yes - maintains relative order of equal elements

## Files

- `bubblesort.c` - Main implementation file containing the bubble sort algorithm
- `README.md` - This documentation file

## How to Compile and Run

### Prerequisites
- GCC compiler or any C compiler
- Basic understanding of C programming

### Compilation
```bash
gcc -o bubblesort bubblesort.c
```

### Execution
```bash
./bubblesort
```

## Usage

The program includes a sample array that demonstrates the sorting functionality. You can modify the array in the `main()` function to test with different values.

### Sample Input
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
```

### Sample Output
```
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
```

## Code Structure

The implementation consists of three main functions:

1. **`bubbleSort(int arr[], int n)`** - The main sorting function
2. **`printArray(int arr[], int size)`** - Helper function to display arrays
3. **`main()`** - Demonstrates the sorting with sample data

## How It Works

1. The algorithm compares adjacent elements in the array
2. If the left element is greater than the right element, they are swapped
3. This process continues for each pair in the array
4. After each complete pass, the largest element "bubbles up" to its correct position
5. The process repeats until no more swaps are needed

## Educational Value

This implementation is perfect for:
- Learning basic sorting algorithms
- Understanding algorithm complexity
- Practicing C programming
- Comparing with other sorting algorithms

## Contributing

Feel free to fork this repository and submit pull requests for improvements such as:
- Optimizations
- Additional sorting algorithms
- Enhanced documentation
- Test cases

## License

This project is open source and available under the MIT License.

## Author

jagapathi8877

---

*This implementation serves as an educational resource for understanding fundamental sorting algorithms.*
