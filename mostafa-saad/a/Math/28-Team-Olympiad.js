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
  const childrenNumber = readline().trim();
  const children = readline().trim().split(" ").map(Number);

  // 1 => programming
  // 2 => math
  // 3 => PE

  let programmingCounter = 0,
    mathCounter = 0,
    PECounter = 0;

  const programmingI = [],
    mathI = [],
    PEI = [];

  for (let i = 0; i < children.length; i++) {
    const child = children[i];
    if (child === 1) {
      programmingCounter++;
      programmingI.push(i + 1);
    }
    if (child === 2) {
      mathCounter++;
      mathI.push(i + 1);
    }
    if (child === 3) {
      PECounter++;
      PEI.push(i + 1);
    }
  }
  const teamsNumber = Math.min(programmingCounter, mathCounter, PECounter);

  console.log(teamsNumber);
  if (teamsNumber !== 0) {
    for (let i = 0; i < teamsNumber; i++) {
      console.log(`${programmingI[i]} ${mathI[i]} ${PEI[i]}`);
    }
  }
};
