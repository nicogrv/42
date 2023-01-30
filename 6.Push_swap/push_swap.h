#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_swap
{
    int bloc;
    int bestblock;
    int besttaillebloc;
    int printmove;
	int tmp;
	int len;
	int move;
    int	*tab1;
    int	*filltab1;
    int	*tab2;
    int	*filltab2;
    FILE *  fd;
    int verifsens;
    int verifsensnbr;
    int verifrb;
}	t_swap;

int	ft_atoi(const char *str);
int	ft_isdigit(char str);
void	*ft_calloc(size_t nbitems, size_t size);


void ft_sa(t_swap *s, int print);
void ft_sb(t_swap *s, int print);
void ft_ss(t_swap *s, int print);


void ft_pa(t_swap *s, int print);
void ft_pb(t_swap *s, int print);

void ft_rr(t_swap *s, int print);
void ft_ra(t_swap *s, int rr);
void ft_rb(t_swap *s, int rr);

void ft_rra(t_swap *s, int print);
void ft_rrb(t_swap *s, int print);