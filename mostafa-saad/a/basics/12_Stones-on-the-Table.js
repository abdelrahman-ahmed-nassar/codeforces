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
  const stonesNumber = +readline().trim();
  const stones = readline().trim().split("");

  //! CODE

  // RRB
  let removedRocksCounter = 0;
  for (let i = 0; i < stonesNumber; i++) {
    const stone = stones[i];
    const nextStone = stones[i + 1];

    if (stone === nextStone) {
      removedRocksCounter++;
    }
  }

  console.log(removedRocksCounter);
};
