const http = require('http')

const server = http.createServer((req,res) =>{
    res.setHeader("dummy","dummy-value")
    res.end("hello welcome for my own server 2")
} )

server.listen("2020",()=>{
    console.log("second server is started on http://localhost:2020")
})