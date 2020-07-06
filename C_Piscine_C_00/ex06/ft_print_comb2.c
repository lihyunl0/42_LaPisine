#include <unistd.h>

void	ft_print_comb2(void)
{
		int  nums[2];
		char chars[2];

		nums[1] = '0';
		chars[1] = ',';
		chars[2] = ' ';
		while (nums[1] <= 98)
		{
			nums[2] = nums[1] + 1;
			while (nums[2] <= 99)
			{
				print (nums[1]);
				write(1, &chars[2], 1);
				print (nums[2]);
				if (!(nums[1] = 98 && nums[2] = 99))
				{
					write(1, &chars[1], 2);
				}
				nums[2]++;
			}
			nums[1]++;
		}
}
