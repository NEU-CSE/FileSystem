#include"OS.h"
bool Format() 
{
	

	memset(InodeBitmap, 0, InodeSum);
	fseek(fw,1 , SEEK_SET);
	fwrite(InodeBitmap, InodeSum, 1, fw);

	for(int i=)

	return true;
}