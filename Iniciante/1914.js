var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let QT = parseInt(lines[0]);

for (let i = 1; i <= (QT * 2); i += 2) {
    let people = lines[i].trim().split(' ');
    let number = lines[i + 1].trim().split(' ').map((val) => Number(val)).reduce((prev, current) => prev + current);
    if (number % 2 === 0) {
        let index = people.indexOf('PAR');
        console.log(people[index - 1]);
    } else {
        let index = people.indexOf('IMPAR');
        console.log(people[index - 1]);
    }
}