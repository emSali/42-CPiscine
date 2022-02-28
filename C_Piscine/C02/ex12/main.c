#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	void *addr; 

	addr = "Bonjour les amin";
	ft_print_memory(addr, 16);
}