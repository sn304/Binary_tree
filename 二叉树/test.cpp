#include"binary_tree.h"
int main() {
	std::cout << "构造了一颗二叉树" << std::endl;
	binary_tree a("a(b(c(f(h i) g) d) e)");
	std::cout << "前序遍历" << std::endl;
	a.PreOrder();
	std::cout << std::endl;
	std::cout << "中序遍历" << std::endl;
	a.InOrder();
	std::cout << std::endl;
	std::cout << "后序遍历" << std::endl;
	a.PostOrder();
		std::cout << std::endl;
		std::cout << "层序遍历" << std::endl;
		a.LeverOrder();
			std::cout << std::endl;
			int i;
			std::cin >> i;
}