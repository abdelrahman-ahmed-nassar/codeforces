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
  const eventsNumber = +readline().trim();
  const events = readline().trim().split(" ").map(Number);

  //! CODE

  let freePoliceOfficers = 0;
  let untreatedCrimes = 0;

  for (let i = 0; i < eventsNumber; i++) {
    const event = events[i];

    if (event > 0) {
      freePoliceOfficers += event;
    } else {
      if (freePoliceOfficers > 0) {
        freePoliceOfficers--;
      } else {
        untreatedCrimes++;
      }
    }
  }

  console.log(untreatedCrimes);
};
