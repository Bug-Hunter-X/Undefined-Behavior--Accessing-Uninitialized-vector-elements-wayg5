std::vector<int> vec; //Uninitialized vector

for (int i = 0; i < 10; ++i) {
  vec[i] = i * 2; // Accessing uninitialized memory, leading to undefined behavior
}

//Correct implementation
std::vector<int> vec(10); // Initialize vector with size 10
for (int i = 0; i < 10; ++i) {
  vec[i] = i * 2;
}