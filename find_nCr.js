// Function for find nCr
function findnCr(n, r){
    let ans = factorial(n)/(factorial(r)*factorial(n-r));

    return ans;
}

// Function for find Factorial of each
function factorial(f)
{
    fact = 1;
    for(let i=2; i<=f ;i++)
    {
        fact = fact*i;
    }
    return fact;
}


let n = 12, r = 5;
console.log(findnCr(n, r));

