#include"binary_tree.h"
int main() {
	std::cout << "������һ�Ŷ�����" << std::endl;
	binary_tree a("a(b(c(f(h i) g) d) e)");
	std::cout << "ǰ�����" << std::endl;
	a.PreOrder();
	std::cout << std::endl;
	std::cout << "�������" << std::endl;
	a.InOrder();
	std::cout << std::endl;
	std::cout << "�������" << std::endl;
	a.PostOrder();
		std::cout << std::endl;
		std::cout << "�������" << std::endl;
		a.LeverOrder();
			std::cout << std::endl;
			int i;
			std::cin >> i;
}