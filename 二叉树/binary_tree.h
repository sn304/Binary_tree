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
	void LeverOrder();   //层序遍历二叉树
private:
	void PreOrder(std::shared_ptr<node> n);     //前序遍历二叉树
	void InOrder(std::shared_ptr<node> n);  //中序遍历二叉树
	void PostOrder(std::shared_ptr<node> n);  //后序遍历二叉树

};

#endif // !__binary_tree__

