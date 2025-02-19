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


  // code
  const problemsNumber = lines[0][0];
  
  // a b c

  let problemsCounter = 0;

  for(let i = 1; i < lines.length; i++) {
    const problem = lines[i];
    let problemScore = problem.reduce((acc, cur) => {
      return acc + cur
    });
    if(problemScore >= 2) {
      problemsCounter++;
    }
  }

  console.log(problemsCounter)
};