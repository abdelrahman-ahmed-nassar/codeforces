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
    const [targetCakesNumber, bakingTime, cakesPerOven, buildingTime] =
      readline().trim().split(" ").map(Number);

    // 8 6 4 5

    // No building
    const noBuildingCookingTime =
      (targetCakesNumber * bakingTime) / cakesPerOven;
      

    // building
    let time = 0;
    let bakedCakes = 0;
    let workingOvens = 1;
    let oven1TimeCounter = 0;
    let oven2TimeCounter = 0;

    while (bakedCakes < targetCakesNumber) {
      if (time === buildingTime) {
        workingOvens = 2;
      }

      if (workingOvens == 1) {
        oven1TimeCounter++;
      }

      if (workingOvens == 2) {
        oven1TimeCounter++;
        oven2TimeCounter++;
      }

      if (oven1TimeCounter == bakingTime) {
        bakedCakes += cakesPerOven;
        oven1TimeCounter = 0;
      }

      if (oven2TimeCounter == bakingTime) {
        bakedCakes += cakesPerOven;
        oven2TimeCounter = 0;
      }

      time++;
    }

    console.log(time > noBuildingCookingTime ? "NO" : "YES");
};

// ! learned 
// simulating time passing



/*
  const [targetCakesNumber, bakingTime, cakesPerOven, buildingTime] = readline()
    .trim()
    .split(" ")
    .map(Number);

  // 8 6 4 5

  // No building
  const noBuildingCookingTime = (targetCakesNumber * bakingTime) / cakesPerOven;

  // building
  let time = 0;
  let bakedCakes = 0;
  let workingOvens = 1;
  let oven1TimeCounter = 0;
  let oven2TimeCounter = 0;

  while (bakedCakes < targetCakesNumber) {

    if (time === buildingTime) {
      workingOvens = 2;
    }

    if (workingOvens == 1) {
      oven1TimeCounter++;
    }

    if (workingOvens == 2) {
      oven1TimeCounter++;
      oven2TimeCounter++;
    }

    if (oven1TimeCounter == bakingTime) {
      bakedCakes += cakesPerOven;
      oven1TimeCounter = 0;
    }

    if (oven2TimeCounter == bakingTime) {
      bakedCakes += cakesPerOven;
      oven2TimeCounter = 0;
    }

        time++;
  }
  
  console.log(time > noBuildingCookingTime ? "NO" : "YES");
*/
