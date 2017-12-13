#ifndef __binary_tree__
#define __binary_tree__
#include<string>
#include<memory>
#include<iostream>
struct node
{
	node(const std::string& s) :name(s){}
	std::string name;
	std::shared_ptr<node> left;
	std::shared_ptr<node> right;


};
class binary_tree
{
	std::shared_ptr<node> root;
public:
	binary_tree(const std::string& s);
	void PreOrder() {
		PreOrder(root);
	}
	void InOrder() {
		InOrder(root);
	}
	void PostOrder() {
		PostOrder(root);
	}
	void LeverOrder();   //�������������
private:
	void PreOrder(std::shared_ptr<node> n);     //ǰ�����������
	void InOrder(std::shared_ptr<node> n);  //�������������
	void PostOrder(std::shared_ptr<node> n);  //�������������

};

#endif // !__binary_tree__

