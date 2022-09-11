void mx_printchar(char c);
void mx_verch_cub(int n);
void mx_boki(int n, char c);
void mx_DLC(int n, int i);

void mx_cube(int n) {
	if (n < 2) return;	
	for (int i = 0; i < ((n + 2) + (n / 2 + 1)); i++) {
		if (i == n / 2 + 1 || i == (n + 2) + (n / 2)) {
		 	mx_verch_cub(n);
		 	if (i == n / 2 + 1){
		 		for (int j = i - 1; j > 0; j--) mx_printchar(' ');
		 		mx_printchar('|');
		 	}
		 	mx_printchar('\n');
		}
		else if (i == 0) {
			for (int j = 0 ; j < n / 2 + 1; j++) mx_printchar(' ');	
			mx_verch_cub(n);
			mx_printchar('\n');
		}
		else if (i > 0 && i < n / 2 + 1) {
			mx_DLC(n, i);
		}
		else { 
			mx_DLC(n, i);
		}
	}
}

void mx_verch_cub(int n) {
	for (int i = 0; i < n*2 + 2; i++) {
		if  (i == 0 || i == 2*n + 1) mx_printchar('+');
		else mx_printchar('-');
	}
}

void mx_boki(int n, char c) {
	for (int i = 0; i < 2*n + 2; i++) {
		if  (i == 0 || i == 2*n + 1) mx_printchar(c);
		else mx_printchar(' ');
	}
}

void mx_DLC(int n, int i) {
	int temp = n / 2;
	if (i > 0 && i < n / 2 + 1) {
		for (int j = (n / 2 + 1) - i; j > 0; j--) mx_printchar(' ');
		mx_boki(n, '/');
		for (int j = i - 1; j > 0; j--) mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
	}
	else { 
		mx_boki(n, '|');
		if (i > n + 1){
			for (int j = 0; j < ((n + 1) + (n / 2)) - i; j++) mx_printchar(' ');
			mx_printchar('/');
		}
		else {
		for (int j = temp; j > 0; j--) mx_printchar(' ');
		if (i == n + 1) mx_printchar('+'); 
		else mx_printchar('|');		
		}
		mx_printchar('\n');
	}
}

