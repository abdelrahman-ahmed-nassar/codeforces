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
    const [orangesNumber, juicerSize, wasteVolume] = readline()
      .trim()
      .split(" ")
      .map(Number);
    // read second line --> array of numbers
    const oranges = readline().trim().split(" ").map(Number);

    let currentWasteVolume = 0;

    let emptyWasteCounter = 0;

    for (let i = 0; i < oranges.length; i++) {
      const orange = oranges[i];
      if (orange > juicerSize) continue;
      currentWasteVolume += orange;

      if (currentWasteVolume > wasteVolume) {
        emptyWasteCounter++;
        currentWasteVolume = 0;
      }
    }
    console.log(emptyWasteCounter);
};
