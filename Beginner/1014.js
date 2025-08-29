var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let X = Number(lines[0])
let Y = Number(lines[1])

let consumption = X / Y

console.log(consumption.toFixed(3) + " km/l")