var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let pi = 3.14159

let R = Number(lines[0])

let vol = (4/3) * pi * (R * R * R)

console.log("VOLUME = " + vol.toFixed(3))