const http = require('http')

const server = http.createServer((req,res) =>{
    res.setHeader("dummy","dummy-value")
    res.setHeader("react","file")
    res.end("<h1>hello welcome for my own server 3</h1>")
} )

server.listen("3030",()=>{
    console.log("third server is started on http://localhost:3030")
})