// 9 - Special Pythagorean Triplet
// *Note:- a < b < c and a + b + c = 1000

let a, b, c;
const sum = 1000;

let tripletFound = false;

for (a = 1; a < sum / 3; a++) {
  for (b = a; b < sum / 2; b++) {
    c = sum - a - b;

    if (a**2 + b**2 === c**2) {
      tripletFound = true;
      break;
    }
  }

  if (tripletFound)
    break;
}

console.log(`The special pythagorean triplet is: ${a}, ${b}, ${c}`);
console.log(`Their product is: ${a * b * c}`);