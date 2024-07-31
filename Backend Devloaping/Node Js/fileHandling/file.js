const fs = require("fs")
// WRITE  //Sync
// fs.writeFileSync("./hello.txt","hello ,what is your name")
//Async
// fs.writeFile('./hello.txt',"hello , how are you ? this is Async",(err) => {})



// READ  //Sync
// const read = fs.readFileSync("./contact.txt","utf-8")
// console.log(read);
//Async 
// const read = fs.readFile("./contact.txt","utf-8",(err,result) => {
//     if(err)
//         console.log("error",err);
//     else
//         console.log("run succesfully",result);
// })
// console.log(read);



//APPEND // Sync
// let data = `ADD YOUR DATA \n`
// fs.appendFileSync("./hello.txt",data)
//Async
// fs.appendFile("./hello.txt",data,(err,result) => {
//     if(err)
//         console.log(err);
//     else
//     console.log(result);
// })



//COPY //sync 
// fs.copyFileSync('./contact.txt','./copy.txt')
//Async
// fs.copyFile('./contact.txt','./copy2.txt',(err,result)=> {
//     if(err)
//         console.log(err);
//     else
//        console.log(result);
// })


//DELETE //Sync
// fs.unlinkSync('./copy.txt')
//Async
// fs.unlink('./copy2.txt',(err,result)=> {
//     if(err)
//         console.log(err);
//     else
//        console.log(result);
// })


// const os = require("os")
// console.log(os.cpus().length);