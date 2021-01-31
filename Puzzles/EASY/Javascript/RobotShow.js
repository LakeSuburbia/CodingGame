/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const L = parseInt(readline());
var sum=0;
var grootste=0;
const N = parseInt(readline());
var inputs = readline().split(' ');
var kleinste=100000;
for (let i = 0; i < N; i++) {
    const b = parseInt(inputs[i]);
    if(b<kleinste){kleinste=b;}
    if(b>=grootste){grootste=b;}
}
if(kleinste >= L-grootste){sum=grootste;}
if(kleinste < L-grootste){sum=L-kleinste;}
if (sum>L){sum=2*(L/2);}

// Write an answer using console.log()
// To debug: console.error('Debug messages...');

console.log(sum);
