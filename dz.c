#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
/*1*/
int mult()
{
	int sum = 23;
	int x = 11;
	while (x < 1000)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
		x++;
	}
	return sum;
}
/*2*/
int Fib()
{
	int f1 = 0;
	int f2 = 1;
	int sum = 0;
	while (f2 <= 4000000)
	{
		if (f2 % 2 == 0)
		{
			sum = sum + f2;
		}
		f1 = f2;
		f2 = f1 + f2;
	}
	return sum;
}
/*3*/
long long divd(long long x, long long del) /* Поиск делителя */
{
	for (long long i = del; i * i <= x; i += 2)
	{
		if (x % i == 0)
			return i;
	}
	return x;
}
long long delitel()
{
	long long x = 600851475143;

	long long del = 3;

	while (x % 2 == 0)
	{
		x /= 2;
	}
	while (x > 1)
	{
		del = divd(x, del);

		x /= del;
	}
	printf("%lld\n", del);

}
/*4*/
int reversed(n)
{
	int m = 0;
	while (n)
	{
		m = m * 10 + n % 10;
		
		n /= 10;
	}
	return m;
}
int Palindrom()
{
	int x = 0; int y = 0;

	int max = 0; int palindrom = 0;

	int p = 0; int obr = 0;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			p = i * j;

			obr = reversed(p);

			if (p == obr)
			{
				palindrom = p;

				if (palindrom > max)
				{
					max = palindrom;

					x = i;

					y = j;
				}
			}
		}
	}
	printf("%d * %d = %d", x, y, max);
}
/*5*/
int MinMult()
{
	int k; int i;
	for (i = 2520; ; i++)
	{
		for (k = 2; k <= 20; k++)
		{
			if (i % k != 0)
			{
				break;
			}
		}
		if (k > 20)
		{
			return i;
			break;
		}
	}
}
/*6*/
int diff()
{
	int sum1 = 0;

	int sum2 = 0;

	int res = 0;
	for (int i = 0; i < 101; i++)
	{
		sum1 += pow(i, 2);

		sum2 += i;
	}
	sum2 = pow(sum2, 2);

	res = sum2 - sum1;

	printf("%d", res);
}
/*7*/
bool prime(unsigned long long num)
{
	bool prime = true;

	for (unsigned long long i = 1; i < num / 2; i += 2) 
	{
		if (num % i == 0 && i != 1) 
		{
			prime = false;
			break;
		}
	}

	return prime;
}

int Prost()
{
	unsigned long long answer = 1;

	for (unsigned int i = 0; i < 10001; answer += 2) 
	{
		if (prime(answer))
			i++;
	}
	answer = answer - 2;
	return answer;

	return 0;
}
/*8*/
unsigned long long GreatMult()
{
	char numb[1000] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int x[1000] = {0};

	unsigned long long mult = 1; unsigned long long res = 0;

	for (int i = 0; i < 1000; i++)
		x[i] = numb[i] - 48;

	for (int i = 0; i < 987; i++)
	{
		for (int j = 0; j < 13; j++)
			mult *= x[i + j];

		if (res < mult)
			res = mult;

		mult = 1;
	}

	return res;
}
/*9*/
int Pythagor()
{
	int c = 0;
	for (int a = 1; a <= 1000; a++)
	{
		for (int b = a + 1; b <= 1000; b++)
		{
			c = 1000 - a - b;

			if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			{
				printf("%d", a * b * c);
			}
		}
	}
}
/*10*/
unsigned long long Zd_el10()
{
	unsigned long long s = 0;
	for (unsigned long long i = 2; i < 2000000; i++)
	{
		if (prime(i))
			s += i;
	}

	return s;
}
/*12*/
int Zd_el12()
{
	int input = 0, p = 0, res = 0;

	while (input < 500)
	{
		input = 0;
		p += 1;
		res += p;
		if (res % 2 == 0)
		{
			for (int i = 1; i <= sqrt(res); i++)
			{
				if (res % i == 0)
				{
					input += 2;
				}
			}
		}
	}

	return res;
}
/*14*/
unsigned long long Zd_el14()
{
	unsigned long int len = 0;
	unsigned long int res = 0;

	for (unsigned long long j = 1000000; j > 1; j--)
	{
		unsigned long int n = 1;

		unsigned long long x = j;
		while (x != 1)
		{
			n++;
			if (x % 2 == 0)
			{
				x = x / 2;
			}
			else
			{
				x = 3 * x + 1;
			}
		}

		if (n > len)
		{
			len = n;
			res = j;
		}
	}

	return res;

}
/*15*/
unsigned long long Zd_el15()
{
	unsigned long long int arr[21][21];

	for (int i = 0; i < 21; ++i)
		arr[i][0] = 1;

	for (int j = 0; j < 21; ++j)
		arr[0][j] = 1;


	for (int i = 1; i < 21; ++i)
	{
		for (int j = 1; j < 21; ++j)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	printf("%llu", arr[20][20]);
}
int Zd2(char* str)
{
	int i = 0;int j = 0;
	for (i = 0;str[i]; i++)
		if (str[i] == '(')
			for (j = i; str[j]; j++)
				if (str[j] == ')')
				{
					str[j] = ' ';
					str[i] = ' ';
					break;
				}

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '(')
			return -1;
		if (str[i] == ')')
			return i;
	}
	return 0;
}