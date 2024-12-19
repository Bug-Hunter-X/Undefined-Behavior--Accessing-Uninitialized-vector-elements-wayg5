std::vector<int> vec(10); // Initialize vector with size 10

for (int i = 0; i < 10; ++i) {
  vec[i] = i * 2; // Now this is safe
}

//Alternative using push_back
std::vector<int> vec2;
for (int i = 0; i < 10; ++i) {
  vec2.push_back(i * 2); //This is also safe and dynamically adjusts the vector size
}