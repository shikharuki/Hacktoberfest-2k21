#include <stdio.h>
#include <math.h>
int main()
{
	int number,number2,addition,subtract;

	do{
		printf("Enter 1st Number: ");
		scanf("%d",&number);

		printf("Enter 2nd Number: ");
		scanf("%d",&number2);

		addition=number;
		subtract=number2;
		/*for (int i = 0; i < number2; ++i)
		{
			addition++;

		}*/

		//OR
		while(subtract!=0){
			if (number2>0)
			{
				addition++;
				subtract--;
			}
			
			else{
				addition--;
				subtract++;
			}
			
		}


		printf("Addition is: %d\n",addition);

		
	}while(true);
	return 0;

}
