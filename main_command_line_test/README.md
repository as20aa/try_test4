# 向main函数中传递参数
形式如下：
```c++
int main(int argc,char **argv)
```
传递的参数列表中，argc代表传递进来的参数的个数		
argv代表了传递进来的参数，一般是一组字符串，由于定义为char **类型，故argv可以存储字符串并表示
argc是自动确定的，不需要声明，使用时在命令提示符窗口下输入
program_name argv
即可