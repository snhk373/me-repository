#include<iostream>
using namespace std;
int main() {
	char h;
	system("color 1");
	cout << "欢迎使用!" << endl;
	//使用说明
	cout << "可输入浮点数" << endl;
	//用户协议
	cout << "是否同意用户协议" << endl;
	cout << "[y]是      [n]否" << endl;
	cin >> h;
	//如果是就启动计算器
	if (h == 'y') {
		system("color 11");
		//定义变量部分
		char n;
		float a, b;
		for (int i = 0; i >= 0; i++) {
			//输入部分
			cout << "输入运算法则" << endl;
			cin >> n;
			cout << "输入运算数字" << endl;
			cin >> a;
			cin >> b;
			//关机部分
			if (n == 's') {
				break;
			}
			//运算部分
			if (n == '+') {
				cout << a << "+" << b << "=" << a + b << endl;
			}
			if (n == '-') {
				cout << a << "-" << b << "=" << a - b << endl;
			}
			if (n == '/') {
				cout << a << "/" << b << "=" << a / b << endl;
			}
			if (n == '*') {
				cout << a << "*" << b << "=" << a * b << endl;
			}
		}
	}
	else {
		return 0;
	}
}