"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

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
  return inputString[currentLine++].trim();
};

// Function to calculate factorial (for combinations)
const factorial = (n) => {
  if (n === 0 || n === 1) return 1;
  let result = 1;
  for (let i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
};

// Function to calculate binomial coefficient C(n, k)
const combination = (n, k) => {
  if (k > n || k < 0) return 0;
  return factorial(n) / (factorial(k) * factorial(n - k));
};

const main = () => {
  const s1 = readline(); // Correct signal
  const s2 = readline(); // Received signal

  let targetPos = 0;
  for (let i = 0; i < s1.length; i++) {
    targetPos += s1[i] === "+" ? 1 : -1;
  }

  let currentPos = 0;
  let unknownCount = 0;
  for (let i = 0; i < s2.length; i++) {
    if (s2[i] === "+") {
      currentPos += 1;
    } else if (s2[i] === "-") {
      currentPos -= 1;
    } else {
      unknownCount++;
    }
  }

  const diff = targetPos - currentPos;

  // If the difference is not reachable with the given number of unknown moves
  if (
    Math.abs(diff) > unknownCount ||
    (unknownCount - Math.abs(diff)) % 2 !== 0
  ) {
    console.log(0.0);
    return;
  }

  // Calculate the number of ways to achieve the required difference
  const stepsToBePositive = (unknownCount + diff) / 2;
  const totalCombinations = Math.pow(2, unknownCount);
  const validCombinations = combination(unknownCount, stepsToBePositive);

  const probability = validCombinations / totalCombinations;
  console.log(probability.toFixed(12));
};

/*
! LEARN
to check (odd odd OR even even)
subtract => 
    even - even = even
    odd - odd = even
*/

/*
  ------ handle possibilities
    //* No random moves
    if (randomMoves === 0) {
      if (finalPosition === currentPosition) {
        console.log(1);
      } else {
        console.log(0);
        return;
      }
    }

    //* should return to the initial position
    if (diff === 0) {
      if (randomMoves % 2 === 0) {
        console.log(0.5);
      } else {
        console.log(0);
        return;
      }
    }

    //* difference
    if (diff === randomMoves) {
      console.log(Math.pow(0.5, randomMoves));
    } else if (diff > randomMoves) {
      console.log(0);
    } else if (diff < randomMoves) {
      // logic

      if (
        (diff % 2 === 0 && randomMoves % 2 !== 0) ||
        (diff % 2 !== 0 && randomMoves % 2 === 0)
      ) {
        console.log(0);
      } else {
        console.log(0.5);
      }
    }


*/
