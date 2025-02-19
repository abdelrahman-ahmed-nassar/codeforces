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
  const [n, k] = readline().trim().split(" ").map(Number);

  let result = [];
  let curIndex = 0;

  let people = Array.from({ length: n }, (_, i) => i + 1);

  while (people.length > 0) {
    curIndex = (curIndex + k) % people.length;
    result.push(people[curIndex]);

    people.splice(curIndex, 1);
  }

  for (let i = 0; i < result.length; i++) {
    console.log(result[i]);
  }
};
