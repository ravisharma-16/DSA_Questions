let arr = [1, 2, 8, 4, 5];

// Function to calculate the sum of an array
function sumArray(arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}

let arroewFunction = (arr) => {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}

console.log(sumArray(arr)); // Output: 15
console.log("\n");
console.log(arroewFunction(arr)); // Output: 15
console.log("\n");

let print = () => {
    arr.forEach((element) => {
        console.log(element * 2);
    });
};

print(); 
console.log("\n");

let sumnum = arr.reduce((prev,curr) =>
    {
        return prev + curr;
    });
console.log(sumnum); // Output: 15
console.log("\n");

let Outputnum = arr.reduce((prev,curr) =>
{
    return prev > curr ? prev : curr;
});
console.log(Outputnum); // Output: 8
console.log("\n");

// input array for user 

// let num = prompt("Enter a number: ");
// let arr2 = [];
// for(let i = 0; i < num; i++)
// {
//     let val = prompt("Enter a number: ");
//     arr2.push(val);
// }
// console.log(arr2); // Output: [1, 2, 3, 4, 5]

let num = parseInt(prompt("Enter how many numbers: "));
let arr2 = [];

for (let i = 0; i < num; i++) {
  let val = parseInt(prompt(`Enter number ${i + 1}:`));
  arr2.push(val);
}

console.log("Your array:", arr2);

