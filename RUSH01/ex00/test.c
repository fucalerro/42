#include "lib.h"

bool sudoku(int **matrix, size_t n)
{
	n = 4;
	int i, j = 0;
	int sum = 0;
	while (i < n)
	{
		ft_sort_int_tab(&matrix[i++][j], n);
		if (matrix[i][j] != n)
			return false;
		sum += matrix[j][i];
	}
	
	int transp_matrix[ft_power(n, 2)]; 
	transpose_arr(matrix, transp_matrix);

	return true;
}

int main(int argc, char const *argv[])
{
    int okarr[16] = {1, 2, 3, 4, 2, 1, 4 ,3, 4, 3, 1, 2, 3, 4, 2, 1};
    print_matrix(okarr, 4, 4);
    return 0;
}
