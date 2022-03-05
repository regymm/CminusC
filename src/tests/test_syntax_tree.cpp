#include "syntax_tree.hpp"
int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <input-file>\n", argv[0]);
		exit(-1);
	}
	auto s = syntax(argv[1]);
	printSyntaxTree(stdout, s);
	auto tree = syntax_tree(s);
	auto printer = syntax_tree_printer();
	tree.run_visitor(printer);
	return 0;
}
