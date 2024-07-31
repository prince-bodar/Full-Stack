const http = require('http')
const fs = require("fs")
const server = http.createServer((req,res)=>{
    // console.log(req);
    const log = `${Date.now()}: ${req.url} : new req recive\n`
    fs.appendFile("log.text",log,(err,data) => {
        switch(req.url){
              case "/" :  res.end("<h1>Hello this is home page</h1>") 
              break
              case "/about" :  res.end("<h1>My name is  Bodar Prince</h1>")
              break
              default:res.end("<h1>404 Your page is not Found</h1>")
        }
    })
})

server.listen(9090,()=>{console.log("your server is started on port http://localhost:9090");})