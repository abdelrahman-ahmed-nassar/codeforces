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
    const embosser = readline().trim().split("");

    // a : 97 -> z : 122

    let turnsCounter = 0;
    let currentChar = 97; //  a

    const letterSpin = (cur, target) => {
      let leftSpin, rightSpin;
      if (cur < target) {
        rightSpin = target - cur;
        leftSpin = 26 - rightSpin;
      } else if (cur > target) {
        leftSpin = cur - target;
        rightSpin = 26 - leftSpin;
      } else {
        leftSpin = 0;
        rightSpin = 0;
      }
      return [leftSpin, rightSpin];
    };

    for (let i = 0; i < embosser.length; i++) {
      const targetChar = embosser[i].codePointAt();
      const [left, right] = letterSpin(currentChar, targetChar);
      let minMove = Math.min(left, right);
      turnsCounter += minMove;
      currentChar = targetChar;
    }
    console.log(turnsCounter);
};
