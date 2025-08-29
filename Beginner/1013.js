var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(/\s+/);

let A = Number(lines[0])
let B = Number(lines[1])
let C = Number(lines[2])

let maiorAB = (A + B + Math.abs(A - B)) / 2
let maiorMC = (maiorAB + C + Math.abs(maiorAB - C)) / 2

console.log(maiorMC + " eh o maior")