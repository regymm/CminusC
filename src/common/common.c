#include "common.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// \brief get all file paths under 'testcase' directory
///
/// under 'testcase' directory, there could be many *.cminus files.
/// \todo student should fill this function
int getAllTestcase(char filename[][256]){
	DIR *d;
	struct dirent *dir;
	d = opendir("./testcase");
	char extension[] = ".cminus";
	int extlen = strlen(extension);
	int dnamelen;
	int file_count = 0;
	if (d) {
		while((dir = readdir(d)) != NULL) {
			dnamelen = strlen(dir->d_name);
			// check whether the extension matches
			if ((dnamelen > extlen) && (strcmp(dir->d_name + dnamelen - extlen, extension) == 0)) {
				strncpy(filename[++file_count - 1], dir->d_name, 255);
				printf("[INFO]: Found file %s to analyze.\n", dir->d_name);
			}
		}
		closedir(d);
	}
	return file_count;
}
/*int getAllTestcase(char filename[][256])*/
/*{*/
	/*/// \todo student should fill this function*/
	/*return 0;*/
/*}*/

