
include <stdio.h>
long calculateSum(long a, lon b);
long calculateAddition(long a, lon b);
long calculateMultiplication(long a, long b);
long calculatedivision(long a, long b);

int main(void)
{
	long retVal = 0;

	printf("Content-type: text/html; charset=iso-8859-1\n\n");
	printf("<html>");
	printf("<body>");
	printf("<BR>");
	printf("Hello World\n");
	printf("<BR>");
	printf("</body>");
	printf("</html>");

	retVal = calculateSum(20, 30);
	printf("retVal = ", retVal);

	retVal = calculateAddition(20, 30);
	printf("retVal = ", retVal);

        retVal = calculateMultiplication(40, 20);
	printf("retVal = ", retVal);

        retVal = calculatedivision(40, 20);
	printf("retVal = ", retVal);
       
	return 0;
}

long calculateSum(long a, lon b)
{
	long retVal = 0;

	retVal = a + b;
	return retVal;
}

long calculateAddition(long a, lon b)
{
	long retVal = 0;

	retVal = a * b;
	return retVal;
}

long calculateMultiplication(long a, long b)
{
	long retVal = 0;

	retVal = a * b;
	return retVal;
}

long calculatedivision(long a, long b)
{
	long retVal = 0;

	retVal = a/b;
	return retVal;
}



