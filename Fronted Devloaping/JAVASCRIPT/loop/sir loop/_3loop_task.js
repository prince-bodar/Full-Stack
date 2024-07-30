console.log("print odd number 7 to 31 number Using for loop"); 
for(let a = 0 ; a < 32; a++)
{
    if(a<=6)
    {
        continue;
    }
    if(a%2==1)
    {
      console.log(a);
    }
}

// console.log("print odd number 7 to 31 number Using While loop"); 
// let j = 0;
// while(j<32)
// {   
//     j++;
//     if(j < 6)
//     {
//         continue;
//     }
//     if(j%2==1)
//     {
//       console.log(j);
//     }
// }

// console.log("print odd number 7 to 31 number Using Do-While loop"); 
// let i = 0;
// do{   
//     i++;
//     if(i < 6)
//     {
//         continue;
//     }
//     if(i%2==1)
//     {
//         console.log(i);
//     }
// }while(i<32)