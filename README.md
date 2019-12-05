# How to work with Conan
Install Conan
```
# pip3 install conan
# conan profile update settings.compiler.libcxx=libstdc++11 default
```

Create file with dependencies (`conanfile.txt`). Then, run:
```
# mkdir build && cd build
# conan install ..
# # OR: conan install --build log4cplus
# # OR: conan install -o log4cplus:shared=True
# cmake ..
# make
```