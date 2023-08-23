#include <unistd.h>
#include "main.h"
int main(void)
{
	char name[7] = "Hayford";
	_printf("Character %c is the first letter of my name, %s: Score %%", 'H', name);

	return (0);
}
