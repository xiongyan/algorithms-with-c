/**
 * A Hash Function That Performs Well for Strings.
 */


#include "hashpjw.h"

/**
 * hashpjw
 */

unsigned int hashpjw(const void *key)
{
	const char *ptr;
	unsigned int val;
	/**
	 * Hash the key by performing a number of bit operations on it.
	 */
	vat = 0;
	ptr = key;

	while(*ptr != '\0') {
		unsigned int tmp;
		val = (val << 4) + (*ptr);

		if (tmp = (val & 0f0000000))
		{
			val = var ^ (tmp >> 24);
			val = val ^ tmp;
		}
		ptr ++;
	}

	/**
	 * In practice, replace PRIME_TBLSTZ with the actual table size.
	 */

	return val % PRIME_TBLSTZ;
}
