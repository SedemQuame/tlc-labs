#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fcntl.h>

using namespace std;
void ls(char ** argv);
int main(int argc, char **argv){
	//change to directory.
	chdir(argv[1]);
	ls(argv);
	return 0;
}

void ls(char ** argv){
	struct stat sbuf;

	//relate file to stat
	if(stat(argv[1], &sbuf) < 0){
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}

	//check if source is a directory.
	if(S_ISREG(sbuf.st_mode)){
		//print out information from the inode.
		
		//print out files name
		cout << argv[1] << endl;
		cout << "uid: " << sbuf.st_uid << endl;
		cout << "gid: " << sbuf.st_gid << endl;
		cout << "device id: " << sbuf.st_dev << endl;
		cout << "inode #: " << sbuf.st_ino << endl;
		cout << "file mode: " << sbuf.st_mode << endl;
		cout << "number of hard links: " << sbuf.st_nlink << endl;
		cout << "total size: " << sbuf.st_size << endl;
	}else{
		cout << "File does not exist" << endl;
	}
}