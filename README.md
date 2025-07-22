# 📚 Data Structures & Algorithms

> A comprehensive collection of DSA implementations and learning resources in C++

## 🎯 About

This repository contains my journey through Data Structures & Algorithms, following the **CodeHelp Red** course curriculum. Each implementation focuses on clean code, proper documentation, and industry best practices.

## 🚀 Getting Started


### Running the Code
```bash
# Clone the repository
git clone https://github.com/MohitGaur17/DSA.git
cd DSA

# Compile and run any C++ file
g++ -o output "Learn C++/binary-to-decimal.cpp"
./output
```


## Notes:

### Code Standards
#### 1. Google C++ Style Guide (Primary)
```cpp
// Variables and functions: snake_case
int binary_number;
int user_input;
void calculate_result();
bool is_valid_input();

// Classes and structs: PascalCase
class BinaryConverter;
struct UserData;

// Constants: kConstantCase (k prefix + PascalCase)
const int kMaxInputSize = 100;
const double kPi = 3.14159;

// Macros: SCREAMING_SNAKE_CASE
#define MAX_BUFFER_SIZE 1024
```

#### 2. Microsoft/Windows Style (Alternative)
```cpp
// Everything in PascalCase
int BinaryNumber;
void CalculateResult();
class BinaryConverter;
bool IsValidInput();
```

#### 3. Standard Library Style (STL Compatible)
```cpp
// Following STL conventions
std::vector<int> input_data;
std::string user_name;
void process_input();
```

## 📝 Documentation Standards

All code includes comprehensive Doxygen documentation:

```cpp
/**
 * @brief Brief description of the function
 * @details Detailed explanation of the algorithm/logic
 * @param parameter_name Description of the parameter
 * @return Description of return value
 * @note Important notes about usage
 * @warning Potential issues or limitations
 * @example Usage example with expected output
 * @author Author name
 * @date Creation date
 */
```


## 📄 License

This project is for educational purposes. Feel free to use and modify the code for your learning journey.

## 🎓 Progress Tracking

- **Started**: July 2025
- **Target**: Complete the course December 2025


> "The best way to learn algorithms is to implement them yourself." - Keep coding! 🚀