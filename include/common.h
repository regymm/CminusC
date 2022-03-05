#ifndef __COMMON_H__
#define __COMMON_H__

#ifndef MAX_TOKEN_LEN
#define MAX_TOKEN_LEN 20
#endif

// the structure used by lex positioning
typedef struct {
	int first_line;
	int first_column;
	int last_line;
	int last_column;
}myloc;

/// \brief get all file paths under 'testcase' directory
///
/// under 'testcase' directory, there could be many *.cminus files.
/// \param filename array of output file names
/// \return length of filename[][]
int getAllTestcase(char filename[][256]);

//int syntax_main(int argc, char* argv[]);

#endif /* common.h */
