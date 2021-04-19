#include<iostream>
using namespace std;

//N是一个非类型模板参数
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
//	Array<int> a2; // 1000 这个怎么实现，如果你define为了1000，那么上面的那个怎么实现
//}

//这是一个
//切记模板这里不要随便的给空格。会出现问题
//这个N是一个非类型模板参数
template<class T,size_t N>
class Array
{
private:
	T _a[N]; //对于数组里面的大小必须是一个确定的数值
};

int main()
{
	Array<int,100>a1; // 100

	Array<int,1000> a2; // 1000 这个怎么实现，如果你define为了1000，那么上面的那个怎么实现

	return 0;
}