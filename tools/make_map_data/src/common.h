#ifndef __COMMON_H__
#define __COMMON_H__

#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char  UC;
typedef unsigned short US;
typedef unsigned int   UI;

typedef struct
{
	UC data[14];
}BITMAP_FILE_HEADER;

typedef struct
{
	UC data[40];
}BITMAP_INFO_HEADER;

typedef struct
{
	BITMAP_FILE_HEADER file_header;
	BITMAP_INFO_HEADER info_header;
	UC*                payload;
}BITMAP_FILE;

#define RGB_OFFSET (sizeof(BITMAP_FILE_HEADER) + sizeof(BITMAP_INFO_HEADER))

#endif /* __COMMON_H__ */
