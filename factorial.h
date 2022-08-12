int factorial(int n){
	int i;
	int fact = 1;
	for(i=n;i>=1;i--){
		fact = fact*i;
	}
	return fact;
}

