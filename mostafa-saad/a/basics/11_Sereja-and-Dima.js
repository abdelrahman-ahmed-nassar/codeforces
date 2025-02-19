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
  const cardsNumber = Number(readline().trim()); // trim for strings
  const cards = readline().split(" ").map(Number); // trim for strings

  let turn = 0;

  let sCounter = 0;
  let dCounter = 0;

  for (let i = 0; i < cardsNumber; i++) {
    const firstCard = cards[0];
    const lastCard = cards.at(-1);

    const biggestCard = Math.max(firstCard, lastCard);

    if (turn == 0) {
      sCounter += biggestCard;
    } else {
      dCounter += biggestCard;
    }
    turn = turn === 0 ? 1 : 0;

    if (firstCard > lastCard) {
      cards.shift();
    } else {
      cards.pop();
    }
  }

  console.log(`${sCounter} ${dCounter}`);
};

/*
!LEARNED 
- take care of the inputs form
- check for edge cases
- switching values using subtraction
- avoid built in function (.at(-1) ==> [arr.length - 1])
*/