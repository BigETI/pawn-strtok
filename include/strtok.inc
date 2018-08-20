#if defined __STRTOK_INCLUDED__
    #endinput
#endif
#define __STRTOK_INCLUDED__

#include <string>

// Superior command arguments processing function
// http://wiki.sa-mp.com/wiki/Strtok
strtok(const string[], &index)
{
	new length = strlen(string);
	while ((index < length) && (string[index] <= ' '))
	{
		index++;
	}
 
	new offset = index;
	new result[20];
	while ((index < length) && (string[index] > ' ') && ((index - offset) < (sizeof(result) - 1)))
	{
		result[index - offset] = string[index];
		index++;
	}
	result[index - offset] = EOS;
	return result;
}
