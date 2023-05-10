
let n = 15, n1 = 0, n2 = 1, res;

while(n--)
{
    res = n1 + n2;
    n1 = n2;
    n2 = res;

    console.log(res);
}

// output:
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610.