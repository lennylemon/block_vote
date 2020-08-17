#include <ctype.h>

typedef int hash;
typedef char *transaction;

int string_hash(void *string) {
	int result = 5381;
	unsigned char *p;
	p = (unsigned char *) string;

	while (*p != '\0') {
		result = (result << 5) + result + *p;
		++p;
	}
	return result;
}
