const { log } = require("console")
const http = require("http")
const server = http.createServer()

server.on("request", (req,res) => {
    res.end("<h1>hello welcome for my own server 4</h1>")
})

server.listen("4040",()=>console.log("fourth server is started on http://localhost:4040"))