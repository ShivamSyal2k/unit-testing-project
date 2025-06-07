# Unit Testing Project with Google Test

This project demonstrates basic unit testing in C++ using [Google Test](https://github.com/google/googletest).

## Project Structure

.
├── Example.hpp # Header file with multiply function declaration
├── Example.cpp # Implementation of multiply function
├── test/
│ ├── ExampleTests.cpp # Google Test test cases
│ └── CMakeLists.txt # Test build configuration
├── CMakeLists.txt # Top-level build configuration

## Prerequisites

- CMake (version 3.14 or higher recommended)
- A C++ compiler supporting C++17
- Internet connection (to download Google Test automatically)

## Build and Run Tests

```bash
mkdir build
cd build
cmake ..
make
ctest --output-on-failure
```
This will build the project and run the tests, showing detailed output for any failed tests.

## Example Test Cases
The tests cover the ```bash multiply(int a, int b) ``` function, verifying behavior with positive, zero, and negative inputs.

## License
This project is for learning purposes only.

