void mx_printchar(char c);
void top_pyramid(int n);
void mid_pyramid(int n, int i);
void bottom_pyramid(int i);

void mx_pyramid(int n)
{
	if (n < 2
		&& n % 2 != 0)
		return;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			top_pyramid(n);
		}
		else if (i != n - 1) {
			mid_pyramid(n, i);
		}
		else {
			bottom_pyramid(i);
		}
		
		mx_printchar('\n'); 
	}
}

void top_pyramid(int n)
{
	for (int j = 0; j < n - 1; j++) 
		mx_printchar(' ');

	mx_printchar('/');
	mx_printchar('\\');
}

void mid_pyramid(int n, int i)
{
	for (int j = 0; j < n - i - 1; j++)
		mx_printchar(' ');
		
	mx_printchar('/');
	for (int j = 0; j < i * 2 -1; j++)
		mx_printchar(' ');
		
	mx_printchar('\\');
	if (i + 1 <= n / 2) {
		for (int j = 0; j < i; j++)
			mx_printchar(' ');
			
		mx_printchar('\\');
	}
	else {
		for (int j = 0; j < n - i - 1; j++)
			mx_printchar(' ');

		mx_printchar('|');
	}
}

void bottom_pyramid(int i)
{
	mx_printchar('/');
	for (int j = 0; j < i * 2 - 1; j++)
		mx_printchar('_');

	mx_printchar('\\');
	mx_printchar('|');
}

