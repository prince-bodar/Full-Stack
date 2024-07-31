const http = require('http')

const server = http.createServer((req,res) =>{
    res.setHeader("dummy","dummy-value")
    res.end("hello welcome for my own server")
} )

server.listen("1010",()=>{
    console.log("server is started on http://localhost:1010")
})