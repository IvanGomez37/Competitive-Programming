#include <iostream>
#include <cmath>

using namespace std;

double g(double p, double a, double b, double c, double d, double x)
{
	return p * (sin(a * x + b) + cos(c * x + d) + 2.0);
}

int main()
{
	double p, a, b, c, d;
    int n;

	cin >> p >> a >> b >> c >> d >> n;
	if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

	double maxi = g(p, a, b, c, d, 1), res = -999999, aux = -999999;
	for(int i = 2; i <= n; i++)
	{
		aux = g(p, a, b, c, d, (double)i);

		if(maxi - aux > res) res = maxi - aux;
        if(aux > maxi) maxi = aux;
	}

    if(res <= 0) cout << 0 << endl;
	else printf("%.9f\n", res);

	return 0;
}