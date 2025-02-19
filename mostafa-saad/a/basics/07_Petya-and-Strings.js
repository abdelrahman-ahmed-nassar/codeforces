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
  const t = readline().trim();
  const n = readline().trim();
  for (let i = 0; i < t.length; i++) {
    const charOneCode = t[i].toLowerCase().charCodeAt(0);
    const charTwoCode = n[i].toLowerCase().charCodeAt(0);

    if (charOneCode > charTwoCode) {
      console.log("1");
      return;
    } else if (charOneCode < charTwoCode) {
      console.log("-1");
      return;
    }
  }
  console.log("0");
};
