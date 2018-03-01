# constructor的一些知识
## constructor的作用
用来给类进行初始化的类似于函数的语句，通常包含在class内，也可以定义在class外，但是在定义时要标明所属的类
```c++
classname::classname(parameter list) : (arguments list) {}
```
## constructor的不同使用
* 显式初始化，在constructor前面加上explicit关键词既可以成为显式构造体，该类只能用直接初始化的方式进行声明
```c++
//声明为显式构造体
explicit classname(parameter list) : (arguments list) {}
...
//显式类的声明及赋值只能通过以下方式
classname temp(arguments list);
```
* 静态成员的声明		
静态成员类似于全局变量，是在class中声明一个类似全局变量的一个方法
```
static int rate;
```
声明了static变量之后，就算定义在类的私有成员中，我们仍能可以获取和改变该变量
* 委托构造体		
类中的构造体可以使用前面出现过的构造体进行初始化语句
```c++
class classname{
	public:
	classname(parameter list):(member initialize list) {}
	classname(differ parameter list):classname(member initialize list)
}
```
* 集合的类		
类中的成员可以通过与其他类或者类的函数建立伙伴关系，从而使用其他类或者成员，并且伙伴关系不能传递，即不能像头文件的包含功能一样嵌套
* 成员初始化的顺序		
初始化顺序按照成员在类中出现的先后顺序进行初始化，但是在构造体中如果出现了类的其他数据成员，则要按照数据成员出现的顺序进行初始化
* 未完待续