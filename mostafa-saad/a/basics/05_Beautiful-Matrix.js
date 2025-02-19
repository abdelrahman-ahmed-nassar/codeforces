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
  // multiple lines [[] , [] , []]
  let lines = [];
  while (currentLine < inputString.length) {
    const line = readline().trim().split(" ").map(Number);
    lines.push(line);
  }

  // code

  let oneRow, oneColumn;
  for (let i = 0; i < lines.length; i++) {
    for (let j = 0; j < lines.length; j++) {
      if (lines[i][j] == 1) {
        oneRow = i +1;
        oneColumn = j + 1;
      }
    }
  }

  let moves = Math.abs(oneColumn - 3) + Math.abs(oneRow - 3);

  console.log(moves);
};
