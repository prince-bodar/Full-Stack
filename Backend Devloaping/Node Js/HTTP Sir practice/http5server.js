const http = require('http')

const server1 = http.createServer((req,res) =>{
    res.end("hello welcome for my own server")
} )


const server2 = http.createServer((req,res) =>{
    res.end("hello welcome for my own server 2")
} )


const server3 = http.createServer((req,res) =>{
    res.end("<h1>hello welcome for my own server 3</h1>")
} )



// server starting code 

server1.listen("1010",()=>{
    console.log("server is started on http://localhost:1010")
})

server2.listen("2020",()=>{
    console.log("second server is started on http://localhost:2020")
})

server3.listen("3030",()=>{
    console.log("third server is started on http://localhost:3030")
})

