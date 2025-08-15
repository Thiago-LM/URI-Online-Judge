var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let C = Number(lines[0]);

for (let i = 1; i <= C; i++) {
    let name = lines[i];
    let isThor = name.toLowerCase().includes('thor');
    console.log(isThor ? 'Y' : 'N');
}