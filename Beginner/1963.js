let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.split(/\s+/).map((val) => Number(val));

let A = numbers[0]
let B = numbers[1]

let res = (B * 100) / A

console.log((res - 100).toFixed(2) + '%')