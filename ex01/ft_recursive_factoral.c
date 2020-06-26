#include<stdio.h>

int ft_recursive_factoral(int nb)
{
	
	int factor;
	factor = nb;
	if(nb == 0 || nb == 1)
		return 1;
	return(factor*ft_recursive_factoral(factor - 1));
}
//int main()
//{
//	int b;
//	b=ft_recursive_factoral(5);
//	printf("factor of 5 is: %d", b);
//}
