// let x = [100,200,300,400];
// let y = [100,200,300,400];
// let z = y;
// console.log(x == y);
// console.log(z == y);
// console.log(z == x);

// console.log(typeof(null))

// const obj =
// {
//     pqr : 100,
//     abc : 200,
//     xyz : {
//         pqr:300,
//         abc : 400,
//     },
// }

// const {pqr,abc,xyz:{pqr:p}} = obj;
// console.log(pqr);
// console.log(abc);
// console.log(p);

// let val = 200;

// console.log(`kitna hogya hai paise ${val}`);

// let x = [1,2,3,4,5];
// const v = x.map((e) => {return e > 3 ? e : null});
// console.log(v);

// i am ravi
// const a = "i am ravi";
// // console.log(a[2]);
// function sort(str) {
//   let count = 0;
//   let a = Infinity;
//   let str2 = '';
//   let val = '';
//   for (let i = 0; i < str.length; i++) {
//     if (str[i] == " ") {
//       if (count < a) {
//         str2 = val;
//         val = '';
//         a = count;
//         count = 0;
//       }
//     } else {
//       count++;
//       val = val + str[i];
//     }
//   }
//   return str2;
// }
// let gii = a.split(" ");
// console.log(gii);
// console.log(sort(a));



// let x = [1,5,3,4,2];
// let y = [6,2,7,4,8,9,5];
// let z = [];
// for(let i = 0; i < x.length; i++)
// {
//     for(let j = 0; j < y.length; j++)
//     {
//          if(x[i] == y[j])
//     {
//         z.push(x[i]);
//     }
//     }
// }



// let i = 0;
// if(x.length < y.length)
// {
//     z = y.filter((r) =>  (r == x[i++] ? r : null
//     ))
// }
// else
// {
//      z = x.filter((r) =>  (r == y[i++] ? r : null
//     ))
// }



// for(let i = 0; i < y.length; i++)
//     {
//         if(x.includes(y[i]))
//         {
//             z.push(y[i]);
//         }
//     }
//     console.log(z);




// for(let i = 0; i < 3; i++)
// {
//     setTimeout(function ravi()
//     {
//         console.log(i);
//     },100);
// }

// closer

// function outer()
// {
//     let count = 0;
//     return () =>
//         {
//         count++;
//         console.log(count);
//     }
// }

// const fr = outer();
// const re = outer();
// fr();
// re();



// console.log(1 + "2" + "3");
// console.log(1 + +"2" + "3");


// var a = 10;
// function test() {
//   console.log(a);
//   var a = 20;
// }
// test();



// let a = [1,2,3].map(x => x * 2);
// let b= [1,2,3].filter(x => x > 1);
// let c = [1,2,3].reduce((a,b) => a + b);

// console.log(a)
// console.log(b)
// console.log(c)


// fun()
// var fun = function(){
//     console.log("I am here");
// }

// fun()
// function fun(){
//     console.log("this is ravi");
// }

// fun()
// function fun(){
//     console.log("I am there");
// }

// fun()


// "use strict" // use to strick mode it was give a rule to use a browser 
// abc = 1000;
// console.log(abc);



// abc = 1000;
// console.log(abc());



// Currying is a technique where a function with multiple arguments is transformed into a sequence of functions, each taking one argument.
// function add(a) {
//     return function (b) {
//         console.log(b);
//         return function (c) 
//         {
//             console.log(c);
//             return a + b + c;
//         };
//     };
// }

// console.log(add(1)(2)(3));

// function run()
// {
//     function fun()
//     {
//         console.log(`hello ji 
//             ravii sharma`);
//     }
//     fun()
// }

// run();

// ******************************infinity currying

// function add(a) {
//     return function(b) {
//         if (b === undefined) return a;
//         return add(a + b);
//     };
// }

// console.log(add(1)(2)(3)(4)()); // 10


// let a = [1,2,3,4];
// console.log(a.find((e) => e > 2)); // give a value of full fill the condition 
// console.log(a.findIndex((e) => e > 1));

// let a = ["ravi","sharma"];
// let isexist = true;
// for(let i = 0; i < a[1].lenght; i++)
// {
//    if()
// }

// let a = [1,10,2,100,3,1000,4,2000];

// let b = a.filter((e) => e > 0 && e < 9);
// console.log(b);
// console.log(a.filter((e) => e > 9 && e < 99));
// console.log(a.filter((e) => e > 99 && e < 999));
// console.log(a.filter((e) => e > 999 && e < 9999));

// let a = 4,b = 6;
// // b = a + b;
// // a = b - a;
// // b = b - a;
// [a,b] = [b,a];
// console.log(a,b);

// let a = [1,'a',2,'b',3,'c','d'];

// // let b = a.filter((e) => e > 0 && e <= 9);
// // console.log(b);
// // console.log(a.filter((e) => e >= 'a' && e <= 'z'));
// let b = a.filter((e) => typeof(e) === 'number');
// let c = a.filter((e) => typeof(e) === 'string');
// console.log(b);
// console.log(c);

// let a = [,,,];
// let b = [1,2,3,4];
// let c = [[1,2,3],[2,3,4]];

// console.log(a.length);
// console.log(b.length);
// console.log(c.length);

// *************Sort a array************************
// let a = [1,18,9,81,98,124,78];
// console.log(a.sort((a,b) => a-b));

// for (let index = 0; index < a.length; index++) {
//     let element = index;
//     for(let i = index + 1; i < a.length; i++)
//     {
//         if(a[element] > a[i])
//         {
//             element = i;
//         }
//     }
//     let temp = a[index];
//     a[index] = a[element];
//     a[element] = temp;
// }
// console.log(a);

// let a = [1,2,3,4,5,6];
// // let newarr = a.map((e) => (e > 2) ? e : null);
// // console.log(newarr);



// *****************important****************************
// // console.log(a,a.splice(2,5));
// console.log(a.slice(2,5)); // it was not consider of last index
// console.log(a.splice(2,3));// basically add a giving a new array of given portion



// let a = [1,2,3,4];
// while(a.length)
// {
//     console.log(a.length);
//     let b = a.shift(); // always give it first index and remove it 
//     console.log(b);
// }
// console.log(a.length);


//   ***********************important*********************************
// let b = {
//     0 : 2,
//     1: 4,
//     2 : 5,
//     3 : 1,
//     4 : 8,
//     length : 5,
// }
// let c = Array.from(b);
// console.log(c);

// let a = new Array(5);
// console.log(a);
// let a = new Array(1,2,3,4);
// console.log(typeof(a));
// console.log(a)


// let a = "abc";
// console.log(a.split("b"));


// **********************Spried operater****************************************
// let a = [1,2,3,4];
// let b = [...a];
// console.log(b);


// function add(a,b,c)
// {
//     return a + b + c;
// }
// let num = [10,20,30];
// console.log(add(num));  // output =  10,20,30undefinedundefined
// console.log(add(...num));  // output =  60

// function add(a,b)
// {
//     return a+b;
// }
// console.log(add([1],2));
// console.log(typeof(add([1],2)));



// find max
// let a = [2,3,1,5,8];
// console.log(Math.max(...a));



// *****************shallo copy****************************
// let a = {
//     name : 'ravi',
//     city : 'delhi',
//     addras : {
//         place : 'bihar'
//     },
// }

// let b = {...a};
// b.name = 'sharma';
// b.city = 'goa';
// b.addras.place = 'up';
// console.log(b);
// console.log(a);

// function great()
// {
//     return function()
//     {
//         console.log("running");
//     }
// }
// let a = great();
// a();

// let a = [1,18,9,81,98,124,78,81,98];
// 1,9,18,78,81,81,98,98,124
// a.sort((a,b) => a-b);
// let b = [];

// let prev = a[0];

// for(let i = 1; i < a.length;i++)
// {
//     if(a[i] != prev)
//     {
//         b.push(prev);
//     }
//     prev = a[i];
// }
// b.push(prev);
// console.log(b);

// let ans = a.filter((e) => {
//     return a.indexOf(e) == a.lastIndexOf(e);
// }
// )

// let newans = [...new Set(a)];  // set was give you a unique values
// console.log(newans);




function abc(a,b,c) //function.length = Number of parameters before the first parameter with a default value.
{

}
function pqr(a=0,b,c) {
    
}
console.log(abc.length,"  ",pqr.length);



// console.log([] === []); // false
// console.log([] == []); // false

// let str = "hello ji kaiso hoo";
// let temp = str.split(" ");
// for (let index = 0; index < temp.length; index++) {
//     let temp2 = temp[index][0].toUpperCase();
//     for(let j = 1;j < temp[index].length;j++)
//     {
//         temp2 += temp[index][j];
//     }
//     console.log(temp2);
// }

// var a = 10;
// console.log(++a)
// console.log(a++)
// console.log(a)
