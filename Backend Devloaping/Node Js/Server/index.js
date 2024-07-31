const http = require('http')
const fs = require("fs")
const url = require("url")

const server = http.createServer((req,res)=>{
    // console.log(req);
    if(req.url === "/favicon.ico") return res.end()
    const log = `${Date.now()}: ${req.url} : new req recive\n`
    const myurl = url.parse(req.url,true)
    console.log(myurl);
    fs.appendFile("log.text",log,(err,data) => {
        switch(myurl.pathname){
              case "/" :  res.end("<h1>Hello this is home page</h1>") 
              break
              case "/about" :
                const username = myurl.query.myname
                const usr_id = myurl.query.userid
                res.end(`<h1>My name is  ${username} and my user id is ${usr_id}</h1>`)
              break
              default:res.end("<h1>404 Your page is not Found</h1>")
        }
    })
})

server.listen(9090,()=>{console.log("your server is started on port http://localhost:9090");})