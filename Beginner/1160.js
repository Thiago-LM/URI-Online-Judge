var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let T = Number(lines[0])

for (let i = 1; i <= T; i++) {
    let PA = parseInt(lines[i].split(' ')[0])
    let PB = parseInt(lines[i].split(' ')[1])
    let G1 = Number(lines[i].split(' ')[2])
    let G2 = Number(lines[i].split(' ')[3])

    let years = 0
    let isMoreThanASec = false
    while (parseInt(PA) <= parseInt(PB)) {
        years++
        PA += parseInt(PA * (G1 / 100))
        PB += parseInt(PB * (G2 / 100))

        if (years > 100) {
            isMoreThanASec = true
            console.log("Mais de 1 seculo.")
            break
        }
    }

    if (!isMoreThanASec) {
        console.log(years + " anos.")
    }
}