#include <stdbool.h>

bool	alphanumeric(const char* strin)
{
	while (*strin != '\0')
	{
		if ((*strin < 48 || *strin > 57) && (*strin < 97  || *strin > 122) && (*strin < 65 || *strin > 90))
			return false;
		strin++;
	}
	return true;
}
