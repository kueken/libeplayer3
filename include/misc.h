#ifndef misc_123
#define misc_123

/* some useful things needed by many files ... */

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>

#define INVALID_PTS_VALUE	0x200000000ll

struct BitPacker_t
{
	uint8_t   *Ptr;         /* write pointer */
	uint32_t   BitBuffer;   /* bitreader shifter */
	int32_t    Remaining;   /* number of remaining in the shifter */
};

void PutBits(BitPacker_t *ld, uint32_t code, uint32_t length);
void FlushBits(BitPacker_t *ld);
int8_t PlaybackDieNow(int8_t val);

#endif
