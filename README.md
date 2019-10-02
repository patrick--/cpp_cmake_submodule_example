# Using CMake with Git Submodules
This repo provides a bare bones template for combining CMake with git submodules. Combining these two tools makes managing external resources very straightforward. 

---

### Overview
For this example, we will be using [cpp-httplib](https://github.com/yhirose/cpp-httplib) as our external header-only resource. The file `main.cpp` in `/src` will include `httplib.h` and demonstrate makeing an http GET request. 

The benefit of using git submodules is that we don't have to include an external project's code in our repository. Instead, we essentially create a pointer to the external repository and when a repo is cloned it downloads the submodule resources automagically.


### Usage
First you will need to clone the repo. When cloning a repo with remote submodules you can grab it with the versions used in the repo using:

`git clone --recurse-submodules`

Or, if you want to clone the repo and update the remote submodules at the same time you would use:

`git clone --recurse-submodules --remote-submodules`


Finally, you can build this example like you would any other CMake based project:

```console
foo@bar:~$ mkdir build
foo@bar:~$ cd build
foo@bar:~$ cmake ..
foo@bar:~$ make
foo@bar:~$ ./cpp_cmake_submodule_example
```
