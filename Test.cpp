#include<iostream>
using namespace std;

//N��һ��������ģ�����
//#define N 100;
//template<class T>
//class Array
//{
//public:
//
//private:
//	T _a[N];
//};
//
//int main()
//{
//	Array<int> a1; // 100
//
//	Array<int> a2; // 1000 �����ôʵ�֣������defineΪ��1000����ô������Ǹ���ôʵ��
//}

//����һ��
//�м�ģ�����ﲻҪ���ĸ��ո񡣻��������
//���N��һ��������ģ�����
template<class T,size_t N>
class Array
{
private:
	T _a[N]; //������������Ĵ�С������һ��ȷ������ֵ
};

int main()
{
	Array<int,100>a1; // 100

	Array<int,1000> a2; // 1000 �����ôʵ�֣������defineΪ��1000����ô������Ǹ���ôʵ��

	return 0;
}