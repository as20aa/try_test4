# 关于指针和寻址，取内容符号的一些理解
'*'单独使用时是作为取内容符号，代表取后面变量的内容		
'&'单独使用时是作为取址符号，代表取后面变量的地址		
但是当再声明变量时如下表示
```c++
const int &r=i;
```
时，则代表着现在声明了一个变量r，它的值是i，并且它的类型是'const int &'，而不管前面这个'&'符号的含义
又如：
```c++
const int *r=&i;
```
代表了声明一个变量r，它的值是i的地址（因为i前面有一个取址符号），并且它的数据类型是'const int *'
根据这些相应声明的数据类型，可以有不同的作用，例如const int *可以作为一个指针使用