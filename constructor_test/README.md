# constructor��һЩ֪ʶ
## constructor������
����������г�ʼ���������ں�������䣬ͨ��������class�ڣ�Ҳ���Զ�����class�⣬�����ڶ���ʱҪ������������
```c++
classname::classname(parameter list) : (arguments list) {}
```
## constructor�Ĳ�ͬʹ��
* ��ʽ��ʼ������constructorǰ�����explicit�ؼ��ʼȿ��Գ�Ϊ��ʽ�����壬����ֻ����ֱ�ӳ�ʼ���ķ�ʽ��������
```c++
//����Ϊ��ʽ������
explicit classname(parameter list) : (arguments list) {}
...
//��ʽ�����������ֵֻ��ͨ�����·�ʽ
classname temp(arguments list);
```
* ��̬��Ա������		
��̬��Ա������ȫ�ֱ���������class������һ������ȫ�ֱ�����һ������
```
static int rate;
```
������static����֮�󣬾��㶨�������˽�г�Ա�У��������ܿ��Ի�ȡ�͸ı�ñ���
* ί�й�����		
���еĹ��������ʹ��ǰ����ֹ��Ĺ�������г�ʼ�����
```c++
class classname{
	public:
	classname(parameter list):(member initialize list) {}
	classname(differ parameter list):classname(member initialize list)
}
```
* ���ϵ���		
���еĳ�Ա����ͨ���������������ĺ�����������ϵ���Ӷ�ʹ����������߳�Ա�����һ���ϵ���ܴ��ݣ���������ͷ�ļ��İ�������һ��Ƕ��
* ��Ա��ʼ����˳��		
��ʼ��˳���ճ�Ա�����г��ֵ��Ⱥ�˳����г�ʼ���������ڹ��������������������������ݳ�Ա����Ҫ�������ݳ�Ա���ֵ�˳����г�ʼ��
* δ�����