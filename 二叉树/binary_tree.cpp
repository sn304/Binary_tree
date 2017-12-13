#include "binary_tree.h"
#include<queue>



binary_tree::binary_tree(const std::string & s)
{
	if (s.size() == 0)
	{
		root = nullptr;
		return;
	}
	//a(b(c d) e)
	int x = s[0];
	int i = 0;
	while (i!=s.size()&&x!='(')
	{
		i++;
		x = s[i];
	}
	if (i == s.size())
	{
		root = std::make_shared<node>(s);
		return;
	}
	else
	root = std::make_shared<node>(s.substr(0, i));

	int lastempty = 0;
	for (int i = 0; i != s.size(); i++) {
		if (s[i] == ' ')
			lastempty = i;
	}
	root->left = binary_tree(s.substr(i + 1, lastempty - i-1)).root;
	root->right = binary_tree(s.substr(lastempty + 1, s.size() - lastempty - 2)).root;

}
void binary_tree::PreOrder(std::shared_ptr<node> n)
{
	if (!n)
		return;
	std::cout << n->name << " ";
	PreOrder(n->left);
	PreOrder(n->right);

	}

void binary_tree::InOrder(std::shared_ptr<node> n)
{
	if (!n)
		return;
	InOrder(n->left);
	std::cout << n->name << " ";
	InOrder(n->right);

}

void binary_tree::PostOrder(std::shared_ptr<node> n)
{
	if (!n)
		return;
	PostOrder(n->left);
	PostOrder(n->right);
	std::cout << n->name << " ";
}

void binary_tree::LeverOrder()
{
	std::queue<std::shared_ptr<node>> q;
	q.push(root);
	while (!q.empty()) {
		if(q.front()->left)
		q.push(q.front()->left);
		if (q.front()->right)
		q.push(q.front()->right);
		std::cout << q.front()->name << " ";
		q.pop();
	}

}
