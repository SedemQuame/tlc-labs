#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <unistd.h>
#include <fcntl.h>


using namespace std;

int main(int argc, char ** argv){
	struct stat sbuf;
	char buffer [1024];
	cout << "Arguments entered: " << argc << endl;	

	if(argc < 3){
		cout << "specify file destination !!!" << endl;
	}
	
	for(int i = 2; i < argc; i++){
		cout << argv[i] << endl;	
	}
	
	cout << "source: " << argv[1] << endl;

	if(stat(argv[1], &sbuf) < 0){
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}

	//check if source is a directory
	if(!S_ISREG(sbuf.st_mode)){
		perror("Source shouldn't be a directory");
		exit(EXIT_FAILURE);
	}else{
		//the assumption is if not directory then file.
		//read file contents and write to file with target file name
		
		int fd;
		fd = open(argv[1], O_CREAT | O_RDWR, 0644);
		int length = read(fd, buffer, 1024);
		string target = argv[2];
		close(fd);

		int fd1 = open(argv[2], O_CREAT | O_RDWR, 0644);
		write(fd, buffer, length);
		close (fd1);
	}


	
	return 0;
}

void isDirectory(string source){

}
