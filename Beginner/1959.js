let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.split(/\s+/);

let N = Number(numbers[0])
let L = Number(numbers[1])

console.log(N * L)