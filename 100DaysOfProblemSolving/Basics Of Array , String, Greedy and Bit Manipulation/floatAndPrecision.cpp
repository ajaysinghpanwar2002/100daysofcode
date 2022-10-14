// floor() method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.711;
    cout << floor(x) << endl;
    cout << floor(y) << endl;
    cout << floor(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << floor(a) << endl;
    cout << floor(b) << endl;
    cout << floor(c) << endl;
    return 0;
}

// 2) ceil() method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << ceil(x) << endl;
    cout << ceil(y) << endl;
    cout << ceil(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << ceil(a) << endl;
    cout << ceil(b) << endl;
    cout << ceil(c) << endl;
    return 0;
}

// 3) trunc() method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << trunc(x) << endl;
    cout << trunc(y) << endl;
    cout << trunc(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << trunc(a) << endl;
    cout << trunc(b) << endl;
    cout << trunc(c) << endl;
    return 0;
}

// 4) round() method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;

    cout << round(x) << endl;
    cout << round(y) << endl;
    cout << round(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << round(a) << endl;
    cout << round(b) << endl;
    cout << round(c) << endl;
    return 0;
}

// 5) setprecision() method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(1) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(2) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(3) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(4) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(5) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(6) << pi << " " << npi
         << endl;
}