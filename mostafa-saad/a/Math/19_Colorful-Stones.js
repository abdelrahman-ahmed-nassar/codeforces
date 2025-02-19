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
    const stones = readline().trim().split("");
    const instructions = readline().trim().split("");

    let currentPosition = 0;

    for (let i = 0; i < instructions.length; i++) {
      const element = instructions[i];

      if (element === stones[currentPosition]) {
        currentPosition++;
      }
    }

    console.log(currentPosition + 1);
};
