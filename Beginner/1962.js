let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.split('\n').map((val) => Number(val));

let N = numbers[0]

for (let i = 1; i <= N; i++) {
    let val = Math.abs(2015 - numbers[i]) 
    console.log(numbers[i] >= 2015 ? ((val + 1) + ' A.C.') : (val + ' D.C.'))
}