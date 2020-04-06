// 10 - Summation of primes

let limit = 2000000;
let sum = 0;

function isPrime(number) {
  for (let i = 2; i <= Math.sqrt(number); i++) {
    if (number % i === 0)
      return false;
  }
  return true;
}

for (let i = 2; i < limit; i++) {
  if (isPrime(i))
    sum += i;
}

console.log(sum);