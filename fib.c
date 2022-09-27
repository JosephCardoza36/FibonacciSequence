#include <stdio.h>


int main() {
	int num = 0;
	int n1 = 1;
	int n2 = 1;
	int sum = 2;
	int count = 2;
	int new = 0;
	int i = 0;
	
	printf("Enter a number between 25 and 40: \n");
	scanf("%d", &num);
	
	if (num >= 25 && num <= 40) {
		printf("\n%d", n1);
		printf("\n%d", n2);
		for (i=2;i<num;i++) {
			new = n1 + n2;
			printf("\n%d", new);
			
			n1 = n2;
			n2 = new;
			
			count += 1;
			sum += new;
			
		}
		printf("\nTotal count: %d", count);
		printf("\nTotal sum: %d", sum);
		printf("\nAverage: %d", sum/count);
	}
	
	else {
		printf("\n\nPlease enter a valid integer");
		system("pause");  //stops flow of control temporarily
		system("cls");	//clears console window
		main();			// re-run main function ("start over")
	}
	
	return 0;
	
}
