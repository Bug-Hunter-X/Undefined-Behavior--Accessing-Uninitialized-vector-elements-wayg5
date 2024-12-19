# Undefined Behavior: Accessing Uninitialized vector elements

This repository demonstrates a common error in C++: accessing elements of an uninitialized `std::vector`.  The code attempts to write to memory locations that haven't been allocated, resulting in undefined behavior. This can lead to crashes, unexpected results, or seemingly random behavior. The solution shows the correct way to initialize a `std::vector` before accessing its elements.

**Bug:** The original `bug.cpp` file shows how directly accessing elements of an uninitialized vector leads to undefined behavior. 

**Solution:** `bugSolution.cpp` demonstrates how to correctly initialize the `std::vector` to avoid this error.  By initializing the vector with the desired size, or using `push_back` to add elements, you ensure that memory is allocated and accessible.