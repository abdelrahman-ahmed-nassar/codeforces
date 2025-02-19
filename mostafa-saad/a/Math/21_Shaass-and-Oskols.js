"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

const printLine = (x) => {
  console.log(x);
};

const print = (x) => {
  process.stdout.write(x);
};

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", () => {
  inputString = inputString.split("\n");
  main();
});

const readline = () => {
  return inputString[currentLine++];
};

const main = () => {
  let lines = [];
  while (currentLine < inputString.length) {
    const line = readline().trim().split(" ").map(Number);
    lines.push(line);
  }

  const wires = lines[1];
  const shots = lines.slice(3, lines.length);

  for (let i = 0; i < shots.length; i++) {
    const [x, y] = shots[i];

    // wires[x - 1] ;

    
    let leftBirds = 0,
      rightBirds = 0;

    if (y <= wires[x - 1]) {
      rightBirds = wires[x - 1] - y;
      leftBirds = wires[x - 1] - rightBirds - 1;
    } else {
      leftBirds = wires[x - 1];
    }

    wires[x - 1] = 0;

    // next
    if (wires[x] !== undefined) {
      wires[x] += rightBirds;
    }

    // prev
    if (wires[x - 2] !== undefined) {
      wires[x - 2] += leftBirds;
    }
  }

  console.log(wires);
};
