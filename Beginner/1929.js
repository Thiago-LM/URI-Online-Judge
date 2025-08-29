let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.trim().split(/\s+/).map((val) => Number(val)).sort((a, b) => a - b);

if (numbers[0] + numbers[1] > numbers[2]) {
    console.log('S')
} else if (numbers[1] + numbers[2] > numbers[3]) {
    console.log('S')
} else {
    console.log('N')
}