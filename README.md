# code-katas-cpp
My C++ Kata solutions for [Codewars](https://www.codewars.com/)

I use [Google Test](https://www.github.com/abseil/googletest) to write tests for my solutions.

Tests are built with CMake. To build:
```bash
mkdir build
cd build
cmake ../
make
```

To run the built GTest executable:
'''bash
tests/code_katas_cpp_tests
```

To create and use a Docker image to build and run the test:
```
docker build -t test-runner . \
    && docker run --rm -it --name cpp-tests test-runner
```
