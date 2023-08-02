#include <fcntl.h>
#include <unistd.h>
char ch;
int input = open(example_file, 0);
//char str[];
int main(){
	while(read(input, &ch, sizeof(char))){
    	//str[i] = ch;
    	write(1, &ch, 1);
	}
}


