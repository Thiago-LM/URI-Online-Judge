let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.trim().split('\n');

for (let i = 0; i < numbers.length; i++) {
    let hour = Number(numbers[i].split(':')[0])
    let minute = Number(numbers[i].split(':')[1])
    
    if (hour < 7 || (hour === 7 && minute == 0)) {
        console.log('Atraso maximo: 0')
    } else {
        let delay = hour >= 8 ? ((hour - 8) * 60) + 60 + minute : ((8 - hour) * 60) - 60 + minute
        console.log('Atraso maximo: ' + delay)
    }
}