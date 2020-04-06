// 7 - 10001st prime

let primeCount = 0;
let nthPrime;
let n = 10001;

function isPrime(number) {
  for (let divisor = 2; divisor <= Math.sqrt(number); divisor++) {
    if (number % divisor === 0)
      return false;
  }
  return true;
}

for (let i = 2;  primeCount < n; i++) {
  if (isPrime(i)) {
    primeCount++;
    nthPrime = i;
  }
}

console.log(`The n-th prime for (n = ${n}) is: ${nthPrime}`);