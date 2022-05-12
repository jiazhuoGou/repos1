#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>

#include "../include/Circle.h"

using namespace std;

int main(void)
{
	auto c1 = Circle{2.3};	//	用匿名对象做拷贝列表初始化
	Circle c2{3.2};	// 直接列表初始化

	Circle c3{};	// 直接列表初始化，调用默认构造函数
	c3 = Circle{4.5};	// 用匿名对象赋值

	cout << "哈哈啊咯" << c3.getArea() << endl;
	cout << c1.getArea() << endl;
	cout << Circle{12}.getArea() << endl;

	Circle *p3 = &c3;
	cout << "用指针 " << p3->getArea() << endl; 
	Circle *pObj = new Circle{100.1};
	cout << "用new创建对象 " << pObj->getArea() << endl; 
	
	delete pObj;
	

	/**
	 * 对象数组
	 */
	auto C = new Circle[3] {1.1, 1.2, 1.3};
	Circle C1[] {1.1, 1.2, 1.3};
	for(auto c1 : C1)
	{
		cout << c1.getArea() << endl;
	}

	/**
	 * @brief 对象作为函数参数
	 * 
	 */
	c1.print(C[1]);
	c1.print(C[1]);
	c1.print(&C[1]);
	c1.setRadius(C[2].getRadisu());
	cout << c1.getRadisu() << endl;

	// string类
	string s{"hello"};
	s.assign(" alohaw ord    ");
	s.append("!");
	// 移除空格
	s.erase(0, s.find_first_not_of(" \t\n\r"));	//删除前面的空格
	s.erase(s.find_last_not_of(" \t\n\r")+1);	// 删除后面的空格
	s += "1";
	cout << s << endl;
	string str{"1234"};
	cout << typeid(123).name() << endl;
	cout << typeid(std::stoi(str)).name() << endl;

	system("pause");
	return 0;
}