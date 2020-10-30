#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char * argv[]);

void function(void)
{
	char buf[256];
	printf("&buf = %p\n", buf);
	printf("main = %p\n", main);
	printf("function = %p\n", function);
	printf("system = %p\n", system);

	system("mkdir -p /tmp/public");
	system("ls -la /tmp/public");

	read(0, buf, 512);

	int i;
	for (i=0; i<4; i++)
		printf ("%02x ", buf[i]);
	puts("");
}

int main(int argc, char * argv[])
{
	int i;

	printf("&i = %p\n", &i);
	function();
}
