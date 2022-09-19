const express = require("express")
const path = require("path")
const fs = require("fs")

const app = express();
const port = 80;

// EXPRESS SPECIFIC STUFF
app.use('/static',express.static('static')) // for serving static files
app.use(express.urlencoded())

// PUG SPECIFIC STUFF
app.set('view engine','pug')          // set the template engine as pug 
app.set('views',path.join(__dirname,'views'))   // set the views directory

// ENDPONTS
app.get('/',(req, res)=>{
    const con = "this is the best content on th internet so far so it use wisely"
    const params = {'title': 'pubg is the best game',"content":con}
    res.status(200).render('index.pug',params)
})

app.post('/',(req, res)=>{
    name=req.body.name
    age=req.body.age
    gender=req.body.gender
    Address=req.body.Address
    more=req.body.more
    
    let outputTowrite=`the name of the client is ${name}, ${age} years old, ${gender},reading at ${Address},
      . more about hime/her:${more}`
    fs.writeFileSync('output.txt',outputTowrite)

    const params={'message':'your form has been submitted succesfully'}
    res.status(200).render('index.pug',params)
})


// START THE SERVERS 
app.listen(port,()=>{
    console.log(`the application started succesfully on port ${port}`)
})
